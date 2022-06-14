// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"  
#include "CellReference.h"
#include "Templates/UniquePtr.h"
#include "zippy.h"
#include "XLXmlFile.hpp" 
#include <filesystem>
#include <list>
#include <queue>
#include "ExcelDocument.generated.h"

class USheet;
 
/**
 * 
 */
UCLASS(Blueprintable)
class FREEEXCEL_API UExcelDocument : public UObject
{
    GENERATED_UCLASS_BODY()
public:

    enum class XLRelationshipType {
        CoreProperties,
        ExtendedProperties,
        CustomProperties,
        Workbook,
        Worksheet,
        Chartsheet,
        Dialogsheet,
        Macrosheet,
        CalculationChain,
        ExternalLink,
        ExternalLinkPath,
        Theme,
        Styles,
        Chart,
        ChartStyle,
        ChartColorStyle,
        Image,
        Drawing,
        VMLDrawing,
        SharedStrings,
        PrinterSettings,
        VBAProject,
        ControlProperties,
        Unknown
    };

    enum class XLProperty {
        Title,
        Subject,
        Creator,
        Keywords,
        Description,
        LastModifiedBy,
        LastPrinted,
        CreationDate,
        ModificationDate,
        Category,
        Application,
        DocSecurity,
        ScaleCrop,
        Manager,
        Company,
        LinksUpToDate,
        SharedDoc,
        HyperlinkBase,
        HyperlinksChanged,
        AppVersion
    };
 

public:

    //  Open the .FreeExcel file with the given path
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void Open(FString path);

    // Create a new .FreeExcel file with the given path.
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void Create(FString path);

    // Close the current document
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void Close();

    //Save the current document using the current filename, overwriting the existing file.
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void Save();

    //Save the document with a new name. If a file exists with that name, it will be overwritten.
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void SaveAs(FString path);

    // Get the filename of the current document, e.g. "spreadsheet.FreeExcel".
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
        FString FileName()const;

    //Get the full path of the current document, e.g. "drive/blah/spreadsheet.FreeExcel"
    UFUNCTION(BlueprintPure, Category = "FreeExcel")
        FString FullPath()const;

    UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Valid (ExcelDocument)"), Category = "FreeExcel")
        bool IsValid() const;

    // Get the sheet with name, and set CurrentSheet to it
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        USheet* GetOrCreateSheetWithName(FString name);
 
 
 
    USheet* GetCurrentSheet()
    {
        return _curSheet;
    }
 
    std::string GetProperty(XLProperty prop) const; 
 
    void SetProperty(XLProperty prop, const std::string& value);
 
    void RemoveProperty(XLProperty theProperty);

    void SetSheetName(std::string id, FString NewName)
    {
        if (!app_properties) return;
        if (!workbook) return;

        // update AppProperties  
        std::string newName = TCHAR_TO_UTF8(*NewName);
        XMLNode  sheet = sheetsNode(workbook->xmlDocument()).
            find_child_by_attribute("r:id", id.c_str());
        std::string sheetName = sheet.attribute("name").value();
        for (auto& iter : sheetNames(app_properties->xmlDocument().document_element())) 
        {
            if (iter.child_value() == sheetName) {
                iter.text().set(newName.c_str());
                return;
            }
        }

        // update workbook   
        UpdateSheetReferences(sheet.attribute("name").value(), newName);
        sheet.attribute("name").set_value(newName.c_str());
 
    }
     
     void ResetCalcChain()
     {
         m_archive.DeleteEntry("xl/calcChain.xml");
         auto item = std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) {
             return item.getXmlPath() == "xl/calcChain.xml";
             });

         if (item != m_data.end()) m_data.erase(item);

     }

     void AddSharedStrings()
     {
         std::string sharedStrings{
                "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
                "<sst xmlns=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\" count=\"1\" uniqueCount=\"1\">\n"
                "  <si>\n"
                "    <t/>\n"
                "  </si>\n"
                "</sst>"
         };
         addOverride("/xl/sharedStrings.xml", ContentType::SharedStrings);
         addRelationship(XLRelationshipType::SharedStrings, "sharedStrings.xml");
         m_archive.AddEntry("xl/sharedStrings.xml", sharedStrings);

     }

     void AddWorksheet(FString SheetName);

     UFUNCTION(BlueprintCallable, Category = "FreeExcel")
         void CloneSheet(FString SheetID, FString CloneName);
   
     const XLXmlData* QueryXmlData(std::string xmlPath) const
     { 
         auto result =
             std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) 
                 { 
                     return item.getXmlPath() == xmlPath;
                 });
         if (result == m_data.end())
         {
             return nullptr;
         } 
         return &*result;
     }
     
protected:
 
    std::string extractXmlFromArchive(const std::string& path);
 
    XLXmlData* getXmlData(const std::string& path);
 
    const XLXmlData* getXmlData(const std::string& path) const;
 
    bool hasXmlData(const std::string& path) const;
 

 

protected:

#pragma region Core Properties

public:  
          
    void setCoreProperty(const std::string& name, const std::string& value);
  
    std::string getCoreProperty(const std::string& name) const;
 
    void removeCoreProperty(const std::string& name);

#pragma endregion

#pragma region App Properties

    inline XMLAttribute headingPairsSize(XMLNode docNode)
    {
        return docNode.child("HeadingPairs").first_child().attribute("size");
    }

    inline XMLNode headingPairsCategories(XMLNode docNode)
    {
        return docNode.child("HeadingPairs").first_child().first_child();
    }

    inline XMLNode headingPairsCounts(XMLNode docNode)
    {
        return headingPairsCategories(docNode).next_sibling();
    }

    inline XMLNode sheetNames(XMLNode docNode)
    {
        return docNode.child("TitlesOfParts").first_child();
    }

    inline XMLAttribute sheetCount(XMLNode docNode)
    {
        return sheetNames(docNode).attribute("size");
    }


    void AddSheetName(const std::string& title);

    void RemoveSheetName(const std::string& title);
     
    void AddHeadingPair(const std::string& name, int value);

    void RemoveHeadingPair(const std::string& name);

    void SetHeadingPair(const std::string& name, int newValue);

    void setAppProperty(const std::string& name, const std::string& value);
         
    std::string getAppProperty(const std::string& name) const; 

    void RemoveAppProperty(const std::string& name); 

    void AppendSheetName(const std::string& sheetName); 

    void PrependSheetName(const std::string& sheetName); 

    void InsertSheetName(const std::string& sheetName, unsigned int index);

#pragma endregion
     
#pragma region SharedStrings
public:
    int32_t  getStringIndex(const std::string& str) const
    {
        auto iter = std::find_if(sharedStringCache.begin(), sharedStringCache.end(), [&](const std::string& s) { return str == s; });

        return iter == sharedStringCache.end() ? -1 : static_cast<int32_t>(std::distance(sharedStringCache.begin(), iter));
    }

    bool  stringExists(const std::string& str) const
    {
        return getStringIndex(str) >= 0;
    }
     
    const char* getString(uint32_t index) const
    {
        return sharedStringCache[index].c_str();
    }

    int32_t  appendString(const std::string& str)
    {
        auto textNode = shared_strings->xmlDocument().document_element().append_child("si").append_child("t");
        if (str.front() == ' ' || str.back() == ' ') textNode.append_attribute("xml:space").set_value("preserve");

        textNode.text().set(str.c_str());
        sharedStringCache.emplace_back(textNode.text().get());

        return static_cast<int32_t>(std::distance(sharedStringCache.begin(), sharedStringCache.end()) - 1);
    }

    void  clearString(uint64_t index)
    {
        sharedStringCache[index] = "";
        auto iter = shared_strings->xmlDocument().document_element().children().begin();
        std::advance(iter, index);
        iter->text().set("");
    }

#pragma endregion
     
#pragma region Workbook
    static XMLNode sheetsNode(const XMLDocument& doc) 
    {
        return doc.document_element().child("sheets");
    }

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    USheet* GetSheet(FString name) const;
     
    USheet* GetSheetAt(uint16_t index)
    {
        if (index < 1 || index > sheetCount()) 
        { 
            return nullptr;
        }
        auto name =  std::vector<XMLNode>(sheetsNode(workbook->xmlDocument()).begin(), sheetsNode(workbook->xmlDocument()).end())[index - 1].
            attribute("name").as_string();
         
        return GetSheet(name);
    }
 
    bool hasSharedStrings() const
    {
        return true;//parentDoc().executeQuery(XLQuerySharedStrings()).sharedStrings() != nullptr;
    }
     

    void deleteNamedRanges()
    {
        for (auto& child : workbook->xmlDocument().document_element().child("definedNames").children())
        {
            child.parent().remove_child(child);
        }
    }
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        void  RemoveSheet(FString name);
 
    uint16_t createInternalSheetID()
    {
        return static_cast<uint16_t>(std::max_element(workbook->xmlDocument().document_element().child("sheets").children().begin(),
            workbook->xmlDocument().document_element().child("sheets").children().end(),
            [](const XMLNode& a, const XMLNode& b) {
                return a.attribute("sheetId").as_uint() < b.attribute("sheetId").as_uint();
            })
            ->attribute("sheetId")
                .as_uint() +
                1);
    }

    std::string sheetID(const std::string& sheetName)
    {
        return workbook->xmlDocument().document_element().child("sheets").find_child_by_attribute("name", sheetName.c_str()).
            attribute("r:id").value();
    }

    std::string sheetName(const std::string& sheetID) const
    {
        return workbook->xmlDocument().document_element().child("sheets").find_child_by_attribute("r:id", sheetID.c_str()).
            attribute("name").value();
    }


    void prepareSheetMetadata(const std::string& sheetName, uint16_t internalID)
    {
        // ===== Add new child node to the "sheets" node.
        auto node = sheetsNode(workbook->xmlDocument()).append_child("sheet");

        // ===== append the required attributes to the newly created sheet node.
        std::string sheetPath = "/xl/worksheets/sheet" + std::to_string(internalID) + ".xml";
        node.append_attribute("name") = sheetName.c_str();
        node.append_attribute("sheetId") = std::to_string(internalID).c_str();
     
       std::string rid =  wbkRelsIdByTarget(sheetPath.substr(4));

       node.append_attribute("r:id") = rid.c_str();
    }
 
    inline  XMLNode findSheetWithName(std::string sheetName)
    {
        return workbook->xmlDocument().
            find_child_by_attribute("name", sheetName.c_str());
    }
    inline const XMLNode findSheetWithName(std::string sheetName) const
    {
        return workbook->xmlDocument().
            find_child_by_attribute("name", sheetName.c_str());
    }
    inline  XMLNode findSheetWithRID(std::string sheetID)
    {
        return workbook->xmlDocument().document_element().child("sheets").
            find_child_by_attribute("r:id", sheetID.c_str());
    }
    inline const XMLNode findSheetWithRID(std::string sheetID) const
    {
        return workbook->xmlDocument().document_element().child("sheets").
            find_child_by_attribute("r:id", sheetID.c_str());
    }
    bool GetSheetVisible(const std::string& name) const
    {
        auto state =std::string( findSheetWithName(name).
            attribute("state").value());

        auto result = true;

        if (state == "visible" || state.empty()) {
            result = true;
        }
        else if (state == "hidden") {
            result = false;
        }
        else if (state == "veryHidden") {
            result = false;
        }

        return result;
    }

    void SetSheetVisible(const std::string& id, bool state)
    {
        auto stateString = std::string();
        if (state)
        {
            stateString = "visible";
        }
        else
        {
            stateString = "hidden";
            // otherwise veryHidden?
        } 
         
        // ===== First, determine if there are other sheets that are visible
        int visibleSheets = 0;
        for (const auto& item : workbook->xmlDocument().document_element().child("sheets").children()) {
            if (std::string(item.attribute("r:id").value()) != id) {
                if (!item.attribute("state") || !(std::string(item.attribute("state").value()) == "hidden" || std::string(item.attribute("state").value()) == "veryHidden"))
                    ++visibleSheets;
            }
        }

        // ===== If there are no other visible sheets, and the current sheet is to be made hidden
        if ((stateString == "hidden" || stateString == "veryHidden") && visibleSheets == 0)
        {
            // At least one sheet must be visible
            return;
        }

        // ===== Then, retrieve or create the visibility ("state") attribute for the sheet, and set it to the "state" value
        auto stateAttribute =
            workbook->xmlDocument().document_element().child("sheets").find_child_by_attribute("r:id", id.c_str()).attribute("state");
        if (!stateAttribute) {
            stateAttribute =
                workbook->xmlDocument().document_element().child("sheets").find_child_by_attribute("r:id", id.c_str()).
                prepend_attribute("state");
        }
        stateAttribute.set_value(stateString.c_str());

        // Next, find the index of the sheet...
        std::string name = workbook->xmlDocument().document_element().child("sheets").find_child_by_attribute("r:id", id.c_str()).attribute("name").value();
        auto index = IndexOfSheet(name) - 1;

        // ...and determine the index of the active sheet
        auto activeTabAttribute = workbook->xmlDocument().document_element().child("bookViews").first_child().attribute("activeTab");
        if (!activeTabAttribute) {
            activeTabAttribute = workbook->xmlDocument().document_element().child("bookViews").first_child().append_attribute("activeTab");
            activeTabAttribute.set_value(0);
        }
        auto activeTabIndex = activeTabAttribute.as_int();

        // Finally, if the current sheet is the active one, set the "activeTab" attribute to the first visible sheet in the workbook
        if (activeTabIndex == index) {
            for (auto& item : workbook->xmlDocument().document_element().child("sheets").children()) {
                if (!item.attribute("state") || std::string(item.attribute("state").value()) != "hidden" || std::string(item.attribute("state").value()) != "veryHidden")
                    activeTabAttribute.set_value(IndexOfSheet(item.attribute("name").value()) - 1);
            }
        }
    }

    void setSheetIndex(const std::string& sheetName, int index)
    {
        // ===== Check that the input is valid
        //    if (index < 1 || index > std::distance(xmlDocument().document_element().child("sheets").children().begin(),
        //                                           xmlDocument().document_element().child("sheets").children().end()))
        //        throw XLException("Invalid sheet index");

        // ===== If the new index is equal to the current, don't do anything
        if (index == std::distance(workbook->xmlDocument().document_element().child("sheets").children().begin(),
            std::find_if(workbook->xmlDocument().document_element().child("sheets").children().begin(),
                workbook->xmlDocument().document_element().child("sheets").children().end(),
                [&](const XMLNode& item) { return sheetName == item.attribute("name").value(); })))
            return;

        // ===== Modify the node in the XML file
        if (index <= 1)
            sheetsNode(workbook->xmlDocument()).prepend_move(sheetsNode(workbook->xmlDocument()).find_child_by_attribute("name", sheetName.c_str()));
        else if (index >= sheetCount())
            sheetsNode(workbook->xmlDocument()).append_move(sheetsNode(workbook->xmlDocument()).find_child_by_attribute("name", sheetName.c_str()));
        else {
            auto vec = std::vector<XMLNode>(sheetsNode(workbook->xmlDocument()).children().begin(), sheetsNode(workbook->xmlDocument()).children().end());
            auto existingSheet = vec[index - 1];
            if (IndexOfSheet(sheetName) < index) {
                sheetsNode(workbook->xmlDocument())
                    .insert_move_after(sheetsNode(workbook->xmlDocument()).find_child_by_attribute("name", sheetName.c_str()), existingSheet);
            }
            else if (IndexOfSheet(sheetName) > index) {
                sheetsNode(workbook->xmlDocument())
                    .insert_move_before(sheetsNode(workbook->xmlDocument()).find_child_by_attribute("name", sheetName.c_str()), existingSheet);
            }
        }

        // ===== Updated defined names with worksheet scopes.
        for (auto& definedName : workbook->xmlDocument().document_element().child("definedNames").children()) {
            definedName.attribute("localSheetId").set_value(IndexOfSheet(sheetName) - 1);
        }
         
    }
     
    int32 IndexOfSheet(const std::string& sheetName) const
    {
        // ===== Iterate through sheet nodes. When a match is found, return the index;
        unsigned int index = 1;
        for (auto& sheet : sheetsNode(workbook->xmlDocument()).children()) {
            if (sheetName == sheet.attribute("name").value()) return index;
            index++;
        }

        return -1;
    }

     int sheetCount() const
    {
        return std::distance(sheetsNode(workbook->xmlDocument()).children().begin(),
            sheetsNode(workbook->xmlDocument()).children().end());
    }

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    int32 GetSheetCount() const
    {
        return worksheetNames().size();
    }
 
    //std::vector<std::string> sheetNames() const
    //{
    //    std::vector<std::string> results;

    //    for (const auto& item : sheetsNode(workbook->xmlDocument()).children()) results.emplace_back(item.attribute("name").value());

    //    return results;
    //}
    UFUNCTION(BlueprintCallable, Category = "FreeExcel")
        TArray<FString> GetSheetNames() const;

    std::vector<std::string> worksheetNames() const
    {
        std::vector<std::string> results;

        for (const auto& item : sheetsNode(workbook->xmlDocument()).children()) {
            if ( wbkRelsTypeById(item.attribute("r:id").value()) == XLRelationshipType::Worksheet)
                results.emplace_back(item.attribute("name").value());
        }

        return results;
    }

    UFUNCTION(BlueprintPure, Category = "FreeExcel")
    bool SheetExists(FString name) const
    {
        std::string sheetName = TCHAR_TO_UTF8(*name);
        return  worksheetExists(sheetName);
    }


    bool worksheetExists(const std::string& sheetName) const
    {
        auto wksNames = worksheetNames();
        return std::find(wksNames.begin(), wksNames.end(), sheetName) != wksNames.end();
    }
  
    /**
        * @details The UpdateSheetName member function searches throug the usages of the old name and replaces with the
        * new sheet name.
        * @todo Currently, this function only searches through defined names. Consider using this function to update the
        * actual sheet name as well.
        */
    void UpdateSheetReferences(const std::string& oldName, const std::string& newName)
    {
        //        for (auto& sheet : m_sheets) {
        //            if (sheet.sheetType == XLSheetType::WorkSheet)
        //                Worksheet(sheet.sheetNode.attribute("name").getValue())->UpdateSheetName(oldName, newName);
        //        }

        // ===== Set up temporary variables
        std::string oldNameTemp = oldName;
        std::string newNameTemp = newName;
        std::string formula;

        // ===== If the sheet name contains spaces, it should be enclosed in single quotes (')
        if (oldName.find(' ') != std::string::npos) oldNameTemp = "\'" + oldName + "\'";
        if (newName.find(' ') != std::string::npos) newNameTemp = "\'" + newName + "\'";

        // ===== Ensure only sheet names are replaced (references to sheets always ends with a '!')
        oldNameTemp += '!';
        newNameTemp += '!';

        // ===== Iterate through all defined names
        for (auto& definedName : workbook->xmlDocument().document_element().child("definedNames").children()) {
            formula = definedName.text().get();

            // ===== Skip if formula contains a '[' and ']' (means that the defined refers to external workbook)
            if (formula.find('[') == std::string::npos && formula.find(']') == std::string::npos) {
                // ===== For all instances of the old sheet name in the formula, replace with the new name.
                while (formula.find(oldNameTemp) != std::string::npos) { // NOLINT
                    formula.replace(formula.find(oldNameTemp), oldNameTemp.length(), newNameTemp);
                }
                definedName.text().set(formula.c_str());
            }
        }
    }

    void SetFullCalculationOnLoad()
    {
        auto calcPr = workbook->xmlDocument().document_element().child("calcPr");

        auto getOrCreateAttribute = [&calcPr](const char* attributeName)
        {
            auto attr = calcPr.attribute(attributeName);
            if (!attr)
                attr = calcPr.append_attribute(attributeName);
            return attr;
        };

        getOrCreateAttribute("forceFullCalc").set_value(true);
        getOrCreateAttribute("fullCalcOnLoad").set_value(true);
    }

    bool SheetIsActive(const std::string& sheetRID) const
    {

        auto activeTabAttribute = workbook->xmlDocument().document_element().child("bookViews").first_child().attribute("activeTab");
        auto activeTabIndex = (activeTabAttribute ? activeTabAttribute.as_uint() : 0);

        unsigned int index = 0;
        for (const auto& item : sheetsNode(workbook->xmlDocument()).children()) {
            if (std::string(item.attribute("r:id").value()) == sheetRID) break;
            ++index;
        }

        return index == activeTabIndex;
    }

    void SetSheetActive(const std::string& sheetRID) {

        unsigned int index = 0;
        for (const auto& item : sheetsNode(workbook->xmlDocument()).children()) {
            if (std::string(item.attribute("r:id").value()) == sheetRID && std::string(item.attribute("state").value()) != "hidden") break;
            if (item == sheetsNode(workbook->xmlDocument()).last_child()) {
                index = 0;
                break;
            }
            ++index;
        }

        if (index == 0) {
            workbook->xmlDocument().document_element().child("bookViews").first_child().remove_attribute("activeTab");
        }
        else {
            if (workbook->xmlDocument().document_element().child("bookViews").first_child().attribute("activeTab") == XMLAttribute())
                workbook->xmlDocument().document_element().child("bookViews").first_child().append_attribute("activeTab");

            workbook->xmlDocument().document_element().child("bookViews").first_child().attribute("activeTab").set_value(index);
        }
    }
#pragma endregion
     
#pragma region Rels
 
    std::string  docRelsIdByTarget(const std::string& target) const
    {
        return doc_rels->xmlDocument().
            document_element().
            find_child_by_attribute("Target", target.c_str()).
            attribute("Id").value();
    }

    // sheet ID by Target
    std::string  wbkRelsIdByTarget(const std::string& target) const
    {
        return workbook_rels->xmlDocument().
            document_element().
            find_child_by_attribute("Target", target.c_str()).
            attribute("Id").value();
    }

    // sheet Target by ID
    std::string wbkRelsTargetById(const std::string& id) const
    {
        return workbook_rels->xmlDocument().document_element().find_child_by_attribute("Id", id.c_str()).
            attribute("Target").value();
    }

    XLRelationshipType wbkRelsTypeById(const std::string& id) const
    {
        const std::string typeString = workbook_rels->xmlDocument().document_element().find_child_by_attribute("Id", id.c_str()).
            attribute("Type").value(); 
        XLRelationshipType type;

        if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/extended-properties")
            type = XLRelationshipType::ExtendedProperties;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/custom-properties")
            type = XLRelationshipType::CustomProperties;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument")
            type = XLRelationshipType::Workbook;
        else if (typeString == "http://schemas.openxmlformats.org/package/2006/relationships/metadata/core-properties")
            type = XLRelationshipType::CoreProperties;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet")
            type = XLRelationshipType::Worksheet;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/styles")
            type = XLRelationshipType::Styles;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/sharedStrings")
            type = XLRelationshipType::SharedStrings;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/calcChain")
            type = XLRelationshipType::CalculationChain;
        else if (typeString == "http://schemas.microsoft.com/office/2006/relationships/vbaProject")
            type = XLRelationshipType::VBAProject;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/externalLink")
            type = XLRelationshipType::ExternalLink;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme")
            type = XLRelationshipType::Theme;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/chartsheet")
            type = XLRelationshipType::Chartsheet;
        else if (typeString == "http://schemas.microsoft.com/office/2011/relationships/chartStyle")
            type = XLRelationshipType::ChartStyle;
        else if (typeString == "http://schemas.microsoft.com/office/2011/relationships/chartColorStyle")
            type = XLRelationshipType::ChartColorStyle;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/drawing")
            type = XLRelationshipType::Drawing;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/image")
            type = XLRelationshipType::Image;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/chart")
            type = XLRelationshipType::Chart;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/externalLinkPath")
            type = XLRelationshipType::ExternalLinkPath;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/printerSettings")
            type = XLRelationshipType::PrinterSettings;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/vmlDrawing")
            type = XLRelationshipType::VMLDrawing;
        else if (typeString == "http://schemas.openxmlformats.org/officeDocument/2006/relationships/ctrlProp")
            type = XLRelationshipType::ControlProperties;
        else
            type = XLRelationshipType::Unknown;

        return type;
    }
     

    //std::vector<_RelsItem>  relationships() const
    //{
    //    auto result = std::vector<_RelsItem>();
    //    for (const auto& item : data_->xmlDocument().document_element().children()) result.emplace_back(_RelsItem(item));

    //    return result;
    //}

    void  RemoveRelationship(const std::string& relID)
    {
        workbook_rels->xmlDocument().document_element().remove_child(
            workbook_rels->xmlDocument().document_element().find_child_by_attribute("Id", relID.c_str()));
    }
     
    static uint32_t GetNewRelsID(XMLNode relationshipsNode)
    {
        return static_cast<uint32_t>(stoi(std::string(std::max_element(relationshipsNode.children().begin(),
            relationshipsNode.children().end(),
            [](XMLNode a, XMLNode b) {
                return stoi(std::string(a.attribute("Id").value()).substr(3)) <
                    stoi(std::string(b.attribute("Id").value()).substr(3));
            })
            ->attribute("Id")
                .value())
            .substr(3)) +
            1);
    }

    void  addRelationship(XLRelationshipType type, const std::string& target)
    {
        std::string typeString = [](XLRelationshipType type)->std::string
        {
            std::string typeString;

            if (type == XLRelationshipType::ExtendedProperties)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/extended-properties";
            else if (type == XLRelationshipType::CustomProperties)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/custom-properties";
            else if (type == XLRelationshipType::Workbook)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
            else if (type == XLRelationshipType::CoreProperties)
                typeString = "http://schemas.openxmlformats.org/package/2006/relationships/metadata/core-properties";
            else if (type == XLRelationshipType::Worksheet)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/worksheet";
            else if (type == XLRelationshipType::Styles)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/styles";
            else if (type == XLRelationshipType::SharedStrings)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/sharedStrings";
            else if (type == XLRelationshipType::CalculationChain)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/calcChain";
            else if (type == XLRelationshipType::VBAProject)
                typeString = "http://schemas.microsoft.com/office/2006/relationships/vbaProject";
            else if (type == XLRelationshipType::ExternalLink)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/externalLink";
            else if (type == XLRelationshipType::Theme)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/theme";
            else if (type == XLRelationshipType::Chartsheet)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/chartsheet";
            else if (type == XLRelationshipType::ChartStyle)
                typeString = "http://schemas.microsoft.com/office/2011/relationships/chartStyle";
            else if (type == XLRelationshipType::ChartColorStyle)
                typeString = "http://schemas.microsoft.com/office/2011/relationships/chartColorStyle";
            else if (type == XLRelationshipType::Drawing)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/drawing";
            else if (type == XLRelationshipType::Image)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/image";
            else if (type == XLRelationshipType::Chart)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/chart";
            else if (type == XLRelationshipType::ExternalLinkPath)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/externalLinkPath";
            else if (type == XLRelationshipType::PrinterSettings)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/printerSettings";
            else if (type == XLRelationshipType::VMLDrawing)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/vmlDrawing";
            else if (type == XLRelationshipType::ControlProperties)
                typeString = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/ctrlProp";
            else
                typeString = "unknow";

            return typeString;
        }(type);

        std::string id = "rId" + std::to_string(GetNewRelsID(workbook_rels->xmlDocument().document_element()));

        // Create new node in the .rels file
        auto node = workbook_rels->xmlDocument().document_element().append_child("Relationship");
        node.append_attribute("Id").set_value(id.c_str());
        node.append_attribute("Type").set_value(typeString.c_str());
        node.append_attribute("Target").set_value(target.c_str());

        if (type == XLRelationshipType::ExternalLinkPath) {
            node.append_attribute("TargetMode").set_value("External");
        }
         
    }

    //bool  targetExists(const std::string& target) const
    //{
    //    return data_->xmlDocument().document_element().find_child_by_attribute("Target", target.c_str()) != nullptr;
    //}


    //bool idExists(const std::string& id) const
    //{
    //    return data_->xmlDocument().document_element().find_child_by_attribute("Id", id.c_str()) != nullptr;
    //}

  
#pragma endregion

#pragma region ContentTypes
     
    ContentType ContentTypeType(XMLNode& node) const
    {
        ContentType type;
        const std::string typeString = node.attribute("ContentType").value();

        if (typeString == "application/vnd.ms-excel.Sheet.macroEnabled.main+xml")
            type = ContentType::WorkbookMacroEnabled;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml")
            type = ContentType::Workbook;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml")
            type = ContentType::Worksheet;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+xml")
            type = ContentType::Chartsheet;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.externalLink+xml")
            type = ContentType::ExternalLink;
        else if (typeString == "application/vnd.openxmlformats-officedocument.theme+xml")
            type = ContentType::Theme;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.styles+xml")
            type = ContentType::Styles;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.sharedStrings+xml")
            type = ContentType::SharedStrings;
        else if (typeString == "application/vnd.openxmlformats-officedocument.drawing+xml")
            type = ContentType::Drawing;
        else if (typeString == "application/vnd.openxmlformats-officedocument.drawingml.chart+xml")
            type = ContentType::Chart;
        else if (typeString == "application/vnd.ms-office.chartstyle+xml")
            type = ContentType::ChartStyle;
        else if (typeString == "application/vnd.ms-office.chartcolorstyle+xml")
            type = ContentType::ChartColorStyle;
        else if (typeString == "application/vnd.ms-excel.controlproperties+xml")
            type = ContentType::ControlProperties;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.calcChain+xml")
            type = ContentType::CalculationChain;
        else if (typeString == "application/vnd.ms-office.vbaProject")
            type = ContentType::VBAProject;
        else if (typeString == "application/vnd.openxmlformats-package.core-properties+xml")
            type = ContentType::CoreProperties;
        else if (typeString == "application/vnd.openxmlformats-officedocument.extended-properties+xml")
            type = ContentType::ExtendedProperties;
        else if (typeString == "application/vnd.openxmlformats-officedocument.custom-properties+xml")
            type = ContentType::CustomProperties;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.comments+xml")
            type = ContentType::Comments;
        else if (typeString == "application/vnd.openxmlformats-officedocument.spreadsheetml.table+xml")
            type = ContentType::Table;
        else if (typeString == "application/vnd.openxmlformats-officedocument.vmlDrawing")
            type = ContentType::VMLDrawing;
        else
            type = ContentType::Unknown;

        return type;

    }
     
    std::string ContentTypePath(XMLNode& node)
    {
        return node.attribute("PartName").value();
    }

    void addOverride(const std::string& path, ContentType type)
    {
        std::string typeString = [](ContentType type)->std::string
        {
            std::string typeString;

            if (type == ContentType::WorkbookMacroEnabled)
                typeString = "application/vnd.ms-excel.Sheet.macroEnabled.main+xml";
            else if (type == ContentType::Workbook)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml";
            else if (type == ContentType::Worksheet)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml";
            else if (type == ContentType::Chartsheet)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+xml";
            else if (type == ContentType::ExternalLink)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.externalLink+xml";
            else if (type == ContentType::Theme)
                typeString = "application/vnd.openxmlformats-officedocument.theme+xml";
            else if (type == ContentType::Styles)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.styles+xml";
            else if (type == ContentType::SharedStrings)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.sharedStrings+xml";
            else if (type == ContentType::Drawing)
                typeString = "application/vnd.openxmlformats-officedocument.drawing+xml";
            else if (type == ContentType::Chart)
                typeString = "application/vnd.openxmlformats-officedocument.drawingml.chart+xml";
            else if (type == ContentType::ChartStyle)
                typeString = "application/vnd.ms-office.chartstyle+xml";
            else if (type == ContentType::ChartColorStyle)
                typeString = "application/vnd.ms-office.chartcolorstyle+xml";
            else if (type == ContentType::ControlProperties)
                typeString = "application/vnd.ms-excel.controlproperties+xml";
            else if (type == ContentType::CalculationChain)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.calcChain+xml";
            else if (type == ContentType::VBAProject)
                typeString = "application/vnd.ms-office.vbaProject";
            else if (type == ContentType::CoreProperties)
                typeString = "application/vnd.openxmlformats-package.core-properties+xml";
            else if (type == ContentType::ExtendedProperties)
                typeString = "application/vnd.openxmlformats-officedocument.extended-properties+xml";
            else if (type == ContentType::CustomProperties)
                typeString = "application/vnd.openxmlformats-officedocument.custom-properties+xml";
            else if (type == ContentType::Comments)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.comments+xml";
            else if (type == ContentType::Table)
                typeString = "application/vnd.openxmlformats-officedocument.spreadsheetml.table+xml";
            else if (type == ContentType::VMLDrawing)
                typeString = "application/vnd.openxmlformats-officedocument.vmlDrawing";
            else
                typeString = "Unknown ContentType";
            return typeString;
        }(type);

        auto node = content_types->xmlDocument().first_child().append_child("Override");
        node.append_attribute("PartName").set_value(path.c_str());
        node.append_attribute("ContentType").set_value(typeString.c_str());
    }

    void deleteOverride(const std::string& path)
    {
        content_types->xmlDocument().document_element().remove_child(
            content_types->xmlDocument().document_element().find_child_by_attribute("PartName", path.c_str()));
    }

    std::vector<XMLNode> getContentItems()
    {
        std::vector<XMLNode> result;
        for (auto item : content_types->xmlDocument().document_element().children()) {
            if (strcmp(item.name(), "Override") == 0) result.emplace_back(item);
        }

        return result;
    }
  
#pragma endregion
    static inline XMLNode getRowNode(XMLNode sheetDataNode, uint32_t rowNumber)
    {
        // ===== If the requested node is beyond the current max node, append a new node to the end.
        auto result = XMLNode();
        if (!sheetDataNode.last_child() || rowNumber > sheetDataNode.last_child().attribute("r").as_ullong()) {
            result = sheetDataNode.append_child("row");

            result.append_attribute("r") = rowNumber;
            //            result.append_attribute("x14ac:dyDescent") = "0.2";
            //            result.append_attribute("spans")           = "1:1";
        }

        // ===== If the requested node is closest to the end, start from the end and search backwards
        else if (sheetDataNode.last_child().attribute("r").as_ullong() - rowNumber < rowNumber) {
            result = sheetDataNode.last_child();
            while (result.attribute("r").as_ullong() > rowNumber) result = result.previous_sibling();
            if (result.attribute("r").as_ullong() < rowNumber) {
                result = sheetDataNode.insert_child_after("row", result);

                result.append_attribute("r") = rowNumber;
                //                result.append_attribute("x14ac:dyDescent") = "0.2";
                //                result.append_attribute("spans")           = "1:1";
            }
        }

        // ===== Otherwise, start from the beginning
        else {
            result = sheetDataNode.first_child();
            while (result.attribute("r").as_ullong() < rowNumber) result = result.next_sibling();
            if (result.attribute("r").as_ullong() > rowNumber) {
                result = sheetDataNode.insert_child_before("row", result);

                result.append_attribute("r") = rowNumber;
                //                result.append_attribute("x14ac:dyDescent") = "0.2";
                //                result.append_attribute("spans")           = "1:1";
            }
        }

        return result;
    }
 
    static inline XMLNode getCellNode(XMLNode rowNode, uint16_t columnNumber)
    {
        auto cellNode = XMLNode();
        auto cellRef = FCellReference((decltype(FCellReference::Row))rowNode.attribute("r").as_uint(), (decltype(FCellReference::Col))columnNumber);

        // ===== If there are no cells in the current row, or the requested cell is beyond the last cell in the row...
        if (rowNode.last_child().empty() || FCellReference(rowNode.last_child().attribute("r").value()).Col < columnNumber) {
            rowNode.append_child("c").append_attribute("r").set_value(cellRef.to_string().c_str());
            cellNode = rowNode.last_child();
        }
        // ===== If the requested node is closest to the end, start from the end and search backwards...
        else if (FCellReference(rowNode.last_child().attribute("r").value()).Col - columnNumber < columnNumber) {
            cellNode = rowNode.last_child();
            while (FCellReference(cellNode.attribute("r").value()).Col > columnNumber) cellNode = cellNode.previous_sibling();
            if (FCellReference(cellNode.attribute("r").value()).Col < columnNumber) {
                cellNode = rowNode.insert_child_after("c", cellNode);
                cellNode.append_attribute("r").set_value(cellRef.to_string().c_str());
            }
        }
        // ===== Otherwise, start from the beginning
        else {
            cellNode = rowNode.first_child();
            while (FCellReference(cellNode.attribute("r").value()).Col < columnNumber) cellNode = cellNode.next_sibling();
            if (FCellReference(cellNode.attribute("r").value()).Col > columnNumber) {
                cellNode = rowNode.insert_child_before("c", cellNode);
                cellNode.append_attribute("r").set_value(cellRef.to_string().c_str());
            }
        }
        return cellNode;
    }
protected:
    FString m_filePath; /**< The path to the original file*/
   // std::filesystem::path path_;

     std::list<XLXmlData>    m_data{};              /**<  */
     std::deque<std::string> sharedStringCache; /**<  */

     XLXmlData* shared_strings; 

     XLXmlData* doc_rels;
     XLXmlData* workbook_rels;
     XLXmlData* content_types;
     XLXmlData* app_properties;
     XLXmlData* core_properties;
     XLXmlData* workbook;
 
    Zippy::ZipArchive m_archive; /**< */

	USheet* _curSheet;
};

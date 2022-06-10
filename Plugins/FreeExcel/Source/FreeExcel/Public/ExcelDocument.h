// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"  
#include "CellReference.h"
#include "Templates/UniquePtr.h"
#include "zippy.h"
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
	   
	 //  Open the .FreeExcel file with the given path
	UFUNCTION(BlueprintCallable ,Category = "FreeExcel")
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
	FString FileName()const ;

	//Get the full path of the current document, e.g. "drive/blah/spreadsheet.FreeExcel"
	UFUNCTION(BlueprintPure, Category = "FreeExcel") 
		FString FullPath()const ;
	  
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Valid (ExcelDocument)"), Category = "FreeExcel")
	bool IsValid() const;
	 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
	USheet* GetSheetAt(int32 index) const;

	// Get the sheet with name, and set CurrentSheet to it
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
	USheet* GetOrCreateSheetWithName(FString name);

	// Delete sheet (worksheet or chartsheet) from the workbook.
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void DeleteSheet(FString name);
	 
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void CloneSheet(FString existingName, FString newName);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetSheetIndex(FString sheetName, int32 index);

	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		int32 GetSheetIndex(FString sheetName);
	 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		int32 GetSheetCount()const;
     
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		TArray<FString> GetSheetNames() const;
 
	UFUNCTION(BlueprintPure, Category = "FreeExcel")
		bool HasSheet(FString name)const;
  
 /*
	UFUNCTION(BlueprintCallable, Category = "FreeExcel")
		void SetFullCalculationOnLoad();*/
	 
	 USheet* GetCurrentSheet() 
	{
		return _curSheet;
	}
	 

     /**
      * @brief Open the .xlsx file with the given path
      * @param fileName The path of the .xlsx file to open
      */
     void open(const std::string& fileName);

     /**
      * @brief Create a new .xlsx file with the given name.
      * @param fileName The path of the new .xlsx file.
      */
     void create(const std::string& fileName);

     /**
      * @brief Close the current document
      */
     void close();

     /**
      * @brief Save the current document using the current filename, overwriting the existing file.
      * @return true if successful; otherwise false.
      */
     void save();

     /**
      * @brief Save the document with a new name. If a file exists with that name, it will be overwritten.
      * @param fileName The path of the file
      * @return true if successful; otherwise false.
      */
     void saveAs(const std::string& fileName);

     /**
      * @brief Get the filename of the current document, e.g. "spreadsheet.xlsx".
      * @return A std::string with the filename.
      */
     const std::string& name() const;

     /**
      * @brief Get the full path of the current document, e.g. "drive/blah/spreadsheet.xlsx"
      * @return A std::string with the path.
      */
     const std::string& path() const;

     /**
      * @brief Get the underlying workbook object, as a const object.
      * @return A const pointer to the XLWorkbook object.
      */
     XLWorkbook workbook() const;

     /**
      * @brief Get the requested document property.
      * @param prop The name of the property to get.
      * @return The property as a string
      */
     std::string property(XLProperty prop) const;

     /**
      * @brief Set a property
      * @param prop The property to set.
      * @param value The getValue of the property, as a string
      */
     void setProperty(XLProperty prop, const std::string& value);
 
     /**
      * @brief Delete the property from the document
      * @param theProperty The property to delete from the document
      */
     void deleteProperty(XLProperty theProperty);
 
     void execCommand(const XLCommand& command);
 
     XLQuery execQuery(const XLQuery& query) const;
 
     XLQuery execQuery(const XLQuery& query);


protected:
 
    std::string extractXmlFromArchive(const std::string& path);
 
    XLXmlData* getXmlData(const std::string& path);
 
    const XLXmlData* getXmlData(const std::string& path) const;
 
    bool hasXmlData(const std::string& path) const;
 
protected:

    class OPENXLSX_EXPORT XLProperties : public XLXmlFile
    {
        //----------------------------------------------------------------------------------------------------------------------
        //           Public Member Functions
        //----------------------------------------------------------------------------------------------------------------------

    public:
        /**
         * @brief
         */
        XLProperties() = default;

        /**
         * @brief
         * @param xmlData
         */
        explicit XLProperties(XLXmlData* xmlData);

        /**
         * @brief
         * @param other
         */
        XLProperties(const XLProperties& other) = default;

        /**
         * @brief
         * @param other
         */
        XLProperties(XLProperties&& other) noexcept = default;

        /**
         * @brief
         */
        ~XLProperties();

        /**
         * @brief
         * @param other
         * @return
         */
        XLProperties& operator=(const XLProperties& other) = default;

        /**
         * @brief
         * @param other
         * @return
         */
        XLProperties& operator=(XLProperties&& other) = default;

        /**
         * @brief
         * @param name
         * @param value
         * @return
         */
        void setProperty(const std::string& name, const std::string& value);

        /**
         * @brief
         * @param name
         * @param value
         * @return
         */
        void setProperty(const std::string& name, int value);

        /**
         * @brief
         * @param name
         * @param value
         * @return
         */
        void setProperty(const std::string& name, double value);

        /**
         * @brief
         * @param name
         * @return
         */
        std::string property(const std::string& name) const;

        /**
         * @brief
         * @param name
         */
        void deleteProperty(const std::string& name);

        //----------------------------------------------------------------------------------------------------------------------
        //           Protected Member Functions
        //----------------------------------------------------------------------------------------------------------------------
    };

    /**
     * @brief This class is a specialization of the XLAbstractXMLFile, with the purpose of the representing the
     * document app properties in the app.xml file (docProps folder) in the .xlsx package.
     */
    class  XLAppProperties : public XLXmlFile
    {
    public:
        XLAppProperties() = default;

        explicit XLAppProperties(XLXmlData* xmlData);

        ~XLAppProperties();


        void addSheetName(const std::string& title);

        void deleteSheetName(const std::string& title);

        void setSheetName(const std::string& oldTitle, const std::string& newTitle);

        void addHeadingPair(const std::string& name, int value);

        void deleteHeadingPair(const std::string& name);

        void setHeadingPair(const std::string& name, int newValue);

        void setProperty(const std::string& name, const std::string& value);
         
        std::string property(const std::string& name) const; 

        void deleteProperty(const std::string& name); 

        void appendSheetName(const std::string& sheetName); 

        void prependSheetName(const std::string& sheetName); 

        void insertSheetName(const std::string& sheetName, unsigned int index);
    };

    FString m_filePath{}; /**< The path to the original file*/
    FString m_realPath{}; /**<  */

    mutable std::list<XLXmlData>    m_data{};              /**<  */
    mutable std::deque<std::string> m_sharedStringCache{}; /**<  */
    mutable XLSharedStrings         m_sharedStrings{};     /**<  */

    XLRelationships m_docRelationships{}; 
    XLRelationships m_wbkRelationships{}; 
    XLContentTypes  m_contentTypes{};  
    XLAppProperties m_appProperties{}; 
    XLProperties    m_coreProperties{}; 
    XLWorkbook      m_workbook{};  

    std::shared_ptr<Zippy::ZipArchive> m_archive; /**< */

	USheet* _curSheet;
};

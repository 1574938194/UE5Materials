 

#pragma once

#pragma warning(push)
#pragma warning(disable : 4251)
#pragma warning(disable : 4275)

#include <cstring>
#include <memory>
#include <sstream>
#include <string>
#include <functional>
#include <map>
#include <vector>
#include <cstring>
#include <algorithm>
 
#include <pugixml.hpp>
using XMLNode = pugi::xml_node;
using XMLAttribute = pugi::xml_attribute;
using XMLDocument = pugi::xml_document;
  
class XLXmlData;
class XLDocument;
   

enum class ContentType {
    Workbook,
    WorkbookMacroEnabled,
    Worksheet,
    Chartsheet,
    ExternalLink,
    Theme,
    Styles,
    SharedStrings,
    Drawing,
    Chart,
    ChartStyle,
    ChartColorStyle,
    ControlProperties,
    CalculationChain,
    VBAProject,
    CoreProperties,
    ExtendedProperties,
    CustomProperties,
    Comments,
    Table,
    VMLDrawing,
    Unknown
};



class  XLXmlData
{
public:

    XLXmlData() = default;
    XLXmlData(const XLXmlData& other) = delete;
    XLXmlData& operator=(const XLXmlData& other) = delete;
   
    XLXmlData(std::function<std::string(std::string)> loader, const std::string& xmlPath, const std::string& xmlId= "", ContentType xmlType = ContentType::Unknown)
        :lazyLoader(loader),
        m_xmlPath(xmlPath),
        m_xmlID(xmlId),
        m_xmlType(xmlType),
        m_xmlDoc(std::make_unique<XMLDocument>())
    {
        m_xmlDoc->reset();
    }

    void setRawData(const std::string& data)
    {
        m_xmlDoc->load_string(data.c_str(), pugi::parse_default | pugi::parse_ws_pcdata);
    }

    std::string getRawData() const
    {
        std::ostringstream ostr;
        getXmlDocument()->save(ostr, "", pugi::format_raw);
        return ostr.str();
    }
  
    std::string getXmlPath() const
    {
        return m_xmlPath;
    }

    std::string getXmlID() const
    {
        return m_xmlID;
    }

    ContentType getXmlType() const
    {
        return m_xmlType;
    }

    XMLDocument* getXmlDocument()
    {
        if (!m_xmlDoc->document_element())
            m_xmlDoc->load_string(lazyLoader(m_xmlPath).c_str(), pugi::parse_default | pugi::parse_ws_pcdata);

        return m_xmlDoc.get();
    }

    const XMLDocument* getXmlDocument() const
    {
        if (!m_xmlDoc->document_element())
            m_xmlDoc->load_string(lazyLoader(m_xmlPath).c_str(), pugi::parse_default | pugi::parse_ws_pcdata);

        return m_xmlDoc.get();
    }

    void setXmlData(const std::string& xmlData)
    {
        setRawData(xmlData);
    }


    std::string xmlData() const
    {
        return getRawData();
    }
 
    std::string relationshipID() const
    {
        return getXmlID();
    }

    XMLDocument& xmlDocument()
    {
        return *getXmlDocument();    // NOLINT
    }

    const XMLDocument& xmlDocument() const
    {
        return *getXmlDocument();
    }

private: 
    std::function<std::string(std::string)> lazyLoader;
    std::string m_xmlPath{};   /**< The path of the XML data in the .xlsx zip archive. >*/
    std::string m_xmlID{};     /**< The relationship ID of the XML data. >*/
    ContentType m_xmlType{};   /**< The type represented by the XML data. >*/
    std::unique_ptr<XMLDocument> m_xmlDoc;       /**< The underlying XMLDocument object. >*/
};



#pragma warning(pop)
 
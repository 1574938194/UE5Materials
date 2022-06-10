 

#pragma once

#pragma warning(push)
#pragma warning(disable : 4251)
#pragma warning(disable : 4275)

 
namespace pugi
{
    class xml_node;
    class xml_attribute;
    class xml_document;
}    // namespace pugi

namespace OpenXLSX
{
    using XMLNode = pugi::xml_node;
    using XMLAttribute = pugi::xml_attribute;
    using XMLDocument = pugi::xml_document;
}   
    class XLXmlData;
    class XLDocument;

 
class  XLXmlFile
{
public: 

    XLXmlFile() = default;
 
    XLXmlFile(XLXmlData* xmlData) : m_xmlData(xmlData) {}
  

public:  
    std::string xmlData() const;
     
    void setXmlData(const std::string& xmlData);
     
    std::string relationshipID() const;
     
    XLDocument& parentDoc();
 
    const XLDocument& parentDoc() const;
 
    XMLDocument& xmlDocument();
 
    const XMLDocument& xmlDocument() const;

protected:                              // ===== PRIVATE MEMBER VARIABLES
    XLXmlData* m_xmlData{ nullptr }; /**< The underlying XML data object. */
};


#pragma warning(pop)
 
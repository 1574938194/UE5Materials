#pragma once

#pragma warning(push)
#pragma warning(disable : 4251)
#pragma warning(disable : 4275)

#include <deque>
#include <string>
 
#include "XLXmlFile.hpp"

 
    
class  XLSharedStrings : public XLXmlFile
{ 
public: 
    XLSharedStrings() = default;
     
    explicit XLSharedStrings(XLXmlData* xmlData, std::deque<std::string> *stringCache)
        : XLXmlFile(xmlData), m_stringCache(stringCache)
    {
    }
  
 
    int32_t getStringIndex(const std::string& str) const;

 
    bool stringExists(const std::string& str) const;

     
    const char* getString(uint32_t index) const;
 
    int32_t appendString(const std::string& str);
 
    void clearString(uint64_t index);

private:
    std::deque<std::string> *m_stringCache {}; /** < Each string must have an unchanging memory address; hence the use of std::deque */
};
 
#pragma warning(pop) 

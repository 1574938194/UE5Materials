/*

   ____                               ____      ___ ____       ____  ____      ___
  6MMMMb                              `MM(      )M' `MM'      6MMMMb\`MM(      )M'
 8P    Y8                              `MM.     d'   MM      6M'    ` `MM.     d'
6M      Mb __ ____     ____  ___  __    `MM.   d'    MM      MM        `MM.   d'
MM      MM `M6MMMMb   6MMMMb `MM 6MMb    `MM. d'     MM      YM.        `MM. d'
MM      MM  MM'  `Mb 6M'  `Mb MMM9 `Mb    `MMd       MM       YMMMMb     `MMd
MM      MM  MM    MM MM    MM MM'   MM     dMM.      MM           `Mb     dMM.
MM      MM  MM    MM MMMMMMMM MM    MM    d'`MM.     MM            MM    d'`MM.
YM      M9  MM    MM MM       MM    MM   d'  `MM.    MM            MM   d'  `MM.
 8b    d8   MM.  ,M9 YM    d9 MM    MM  d'    `MM.   MM    / L    ,M9  d'    `MM.
  YMMMM9    MMYMMM9   YMMMM9 _MM_  _MM_M(_    _)MM_ _MMMMMMM MYMMMM9 _M(_    _)MM_
            MM
            MM
           _MM_

  Copyright (c) 2018, Kenneth Troldal Balslev

  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  - Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
  - Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
  - Neither the name of the author nor the
    names of any contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */

// ===== External Includes ===== //
#include <nowide/fstream.hpp>
#include <pugixml.hpp>
#if defined(_WIN32)
#    include <random>
#endif

// ===== OpenXLSX Includes ===== //
#include "XLContentTypes.hpp"
#include "XLDocument.hpp"
#include "XLSheet.hpp"

using namespace OpenXLSX;
 
 

/**
 * @details
 * @todo Currently, this method returns the full path, which is not the intention.
 */
const std::string& XLDocument::name() const
{
    return m_filePath;
}

/**
 * @details
 */
const std::string& XLDocument::path() const
{
    return m_filePath;
}

/**
 * @details Get a const pointer to the underlying XLWorkbook object.
 */
XLWorkbook XLDocument::workbook() const
{
    return m_workbook;
}

/**
 * @details Get the value for a property.
 */
std::string XLDocument::property(XLProperty prop) const
{
    switch (prop) {
        case XLProperty::Application:
            return m_appProperties.property("Application");
        case XLProperty::AppVersion:
            return m_appProperties.property("AppVersion");
        case XLProperty::Category:
            return m_coreProperties.property("cp:category");
        case XLProperty::Company:
            return m_appProperties.property("Company");
        case XLProperty::CreationDate:
            return m_coreProperties.property("dcterms:created");
        case XLProperty::Creator:
            return m_coreProperties.property("dc:creator");
        case XLProperty::Description:
            return m_coreProperties.property("dc:description");
        case XLProperty::DocSecurity:
            return m_appProperties.property("DocSecurity");
        case XLProperty::HyperlinkBase:
            return m_appProperties.property("HyperlinkBase");
        case XLProperty::HyperlinksChanged:
            return m_appProperties.property("HyperlinksChanged");
        case XLProperty::Keywords:
            return m_coreProperties.property("cp:keywords");
        case XLProperty::LastModifiedBy:
            return m_coreProperties.property("cp:lastModifiedBy");
        case XLProperty::LastPrinted:
            return m_coreProperties.property("cp:lastPrinted");
        case XLProperty::LinksUpToDate:
            return m_appProperties.property("LinksUpToDate");
        case XLProperty::Manager:
            return m_appProperties.property("Manager");
        case XLProperty::ModificationDate:
            return m_coreProperties.property("dcterms:modified");
        case XLProperty::ScaleCrop:
            return m_appProperties.property("ScaleCrop");
        case XLProperty::SharedDoc:
            return m_appProperties.property("SharedDoc");
        case XLProperty::Subject:
            return m_coreProperties.property("dc:subject");
        case XLProperty::Title:
            return m_coreProperties.property("dc:title");
        default:
            return "";    // To silence compiler warning.
    }
}

/**
 * @details Set the value for a property.
 *
 * If the property is a datetime, it must be in the W3CDTF format, i.e. YYYY-MM-DDTHH:MM:SSZ. Also, the time should
 * be GMT. Creating a time point in this format can be done as follows:
 * ```cpp
 * #include <iostream>
 * #include <iomanip>
 * #include <ctime>
 * #include <sstream>
 *
 * // other stuff here
 *
 * std::time_t t = std::time(nullptr);
 * std::tm tm = *std::gmtime(&t);
 *
 * std::stringstream ss;
 * ss << std::put_time(&tm, "%FT%TZ");
 * auto datetime = ss.str();
 *
 * // datetime now is a string with the datetime in the right format.
 *
 * ```
 */
void XLDocument::setProperty(XLProperty prop, const std::string& value) // NOLINT
{
    switch (prop) {
        case XLProperty::Application:
            m_appProperties.setProperty("Application", value);
            break;
        case XLProperty::AppVersion:    // ===== TODO: Clean up this section
            try {
                std::stof(value);
            }
            catch (...) {
                throw XLPropertyError("Invalid property value");
            }

            if (value.find('.') != std::string::npos) {
                if (!value.substr(value.find('.') + 1).empty() && value.substr(value.find('.') + 1).size() <= 5) { // NOLINT
                    if (!value.substr(0, value.find('.')).empty() && value.substr(0, value.find('.')).size() <= 2) {
                        m_appProperties.setProperty("AppVersion", value);
                    }
                    else
                        throw XLPropertyError("Invalid property value");
                }
                else
                    throw XLPropertyError("Invalid property value");
            }
            else
                throw XLPropertyError("Invalid property value");

            break;

        case XLProperty::Category:
            m_coreProperties.setProperty("cp:category", value);
            break;
        case XLProperty::Company:
            m_appProperties.setProperty("Company", value);
            break;
        case XLProperty::CreationDate:
            m_coreProperties.setProperty("dcterms:created", value);
            break;
        case XLProperty::Creator:
            m_coreProperties.setProperty("dc:creator", value);
            break;
        case XLProperty::Description:
            m_coreProperties.setProperty("dc:description", value);
            break;
        case XLProperty::DocSecurity:
            if (value == "0" || value == "1" || value == "2" || value == "4" || value == "8")
                m_appProperties.setProperty("DocSecurity", value);
            else
                throw XLPropertyError("Invalid property value");
            break;

        case XLProperty::HyperlinkBase:
            m_appProperties.setProperty("HyperlinkBase", value);
            break;
        case XLProperty::HyperlinksChanged:
            if (value == "true" || value == "false")
                m_appProperties.setProperty("HyperlinksChanged", value);
            else
                throw XLPropertyError("Invalid property value");

            break;

        case XLProperty::Keywords:
            m_coreProperties.setProperty("cp:keywords", value);
            break;
        case XLProperty::LastModifiedBy:
            m_coreProperties.setProperty("cp:lastModifiedBy", value);
            break;
        case XLProperty::LastPrinted:
            m_coreProperties.setProperty("cp:lastPrinted", value);
            break;
        case XLProperty::LinksUpToDate:
            if (value == "true" || value == "false")
                m_appProperties.setProperty("LinksUpToDate", value);
            else
                throw XLPropertyError("Invalid property value");
            break;

        case XLProperty::Manager:
            m_appProperties.setProperty("Manager", value);
            break;
        case XLProperty::ModificationDate:
            m_coreProperties.setProperty("dcterms:modified", value);
            break;
        case XLProperty::ScaleCrop:
            if (value == "true" || value == "false")
                m_appProperties.setProperty("ScaleCrop", value);
            else
                throw XLPropertyError("Invalid property value");
            break;

        case XLProperty::SharedDoc:
            if (value == "true" || value == "false")
                m_appProperties.setProperty("SharedDoc", value);
            else
                throw XLPropertyError("Invalid property value");
            break;

        case XLProperty::Subject:
            m_coreProperties.setProperty("dc:subject", value);
            break;
        case XLProperty::Title:
            m_coreProperties.setProperty("dc:title", value);
            break;
    }
}

/**
 * @details Delete a property
 */
void XLDocument::deleteProperty(XLProperty theProperty)
{
    setProperty(theProperty, "");
}

/**
 * @details
 */
void XLDocument::execCommand(const XLCommand& command) {

    switch (command.type()) {
        case XLCommandType::SetSheetName:
            m_appProperties.setSheetName(command.getParam<std::string>("sheetName"), command.getParam<std::string>("newName"));
            m_workbook.setSheetName(command.getParam<std::string>("sheetID"), command.getParam<std::string>("newName"));
            break;

        case XLCommandType::SetSheetColor:
            // TODO: To be implemented
            break;

        case XLCommandType::SetSheetVisibility:
            m_workbook.setSheetVisibility(command.getParam<std::string>("sheetID"), command.getParam<std::string>("sheetVisibility"));
            break;

        case XLCommandType::SetSheetIndex:
            {
                XLQuery qry(XLQueryType::QuerySheetName);
                auto sheetName = execQuery(qry.setParam("sheetID", command.getParam<std::string>("sheetID"))).result<std::string>();
                m_workbook.setSheetIndex(sheetName, command.getParam<uint16_t>("sheetIndex"));
            }
            break;

        case XLCommandType::SetSheetActive:
            m_workbook.setSheetActive(command.getParam<std::string>("sheetID"));
            break;

        case XLCommandType::ResetCalcChain:
            {
                m_archive.deleteEntry("xl/calcChain.xml");
                auto item = std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) {
                    return item.getXmlPath() == "xl/calcChain.xml";
                });

                if (item != m_data.end()) m_data.erase(item);
            }
            break;
        case XLCommandType::AddSharedStrings:
            {
                std::string sharedStrings {
                    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
                    "<sst xmlns=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\" count=\"1\" uniqueCount=\"1\">\n"
                    "  <si>\n"
                    "    <t/>\n"
                    "  </si>\n"
                    "</sst>"
                };
                m_contentTypes.addOverride("/xl/sharedStrings.xml", XLContentType::SharedStrings);
                m_wbkRelationships.addRelationship(XLRelationshipType::SharedStrings, "sharedStrings.xml");
                m_archive.addEntry("xl/sharedStrings.xml", sharedStrings);
            }
            break;
        case XLCommandType::AddWorksheet:
            {
                std::string emptyWorksheet {
                    "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>\n"
                    "<worksheet xmlns=\"http://schemas.openxmlformats.org/spreadsheetml/2006/main\""
                    " xmlns:r=\"http://schemas.openxmlformats.org/officeDocument/2006/relationships\""
                    " xmlns:mc=\"http://schemas.openxmlformats.org/markup-compatibility/2006\" mc:Ignorable=\"x14ac\""
                    " xmlns:x14ac=\"http://schemas.microsoft.com/office/spreadsheetml/2009/9/ac\">"
                    "<dimension ref=\"A1\"/>"
                    "<sheetViews>"
                    "<sheetView workbookViewId=\"0\"/>"
                    "</sheetViews>"
                    "<sheetFormatPr baseColWidth=\"10\" defaultRowHeight=\"16\" x14ac:dyDescent=\"0.2\"/>"
                    "<sheetData/>"
                    "<pageMargins left=\"0.7\" right=\"0.7\" top=\"0.75\" bottom=\"0.75\" header=\"0.3\" footer=\"0.3\"/>"
                    "</worksheet>"
                };
                m_contentTypes.addOverride(command.getParam<std::string>("sheetPath"), XLContentType::Worksheet);
                m_wbkRelationships.addRelationship(XLRelationshipType::Worksheet, command.getParam<std::string>("sheetPath").substr(4));
                m_appProperties.appendSheetName(command.getParam<std::string>("sheetName"));
                m_archive.addEntry(command.getParam<std::string>("sheetPath").substr(1), emptyWorksheet);
                m_data.emplace_back(
                    /* parentDoc */ this,
                    /* xmlPath   */ command.getParam<std::string>("sheetPath").substr(1),
                    /* xmlID     */ m_wbkRelationships.relationshipByTarget(command.getParam<std::string>("sheetPath").substr(4)).id(),
                    /* xmlType   */ XLContentType::Worksheet);
            }
            break;
        case XLCommandType::AddChartsheet:
            // TODO: To be implemented
            break;
        case XLCommandType::DeleteSheet:
        {
            m_appProperties.deleteSheetName(command.getParam<std::string>("sheetName"));
            auto sheetPath = "/xl/" + m_wbkRelationships.relationshipById(command.getParam<std::string>("sheetID")).target();
            m_archive.deleteEntry(sheetPath.substr(1));
            m_contentTypes.deleteOverride(sheetPath);
            m_wbkRelationships.deleteRelationship(command.getParam<std::string>("sheetID"));
            m_data.erase(std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) {
                return item.getXmlPath() == sheetPath.substr(1);
            }));
        }
            break;
        case XLCommandType::CloneSheet:
        {
            auto internalID = m_workbook.createInternalSheetID();
            auto sheetPath  = "/xl/worksheets/sheet" + std::to_string(internalID) + ".xml";
            if (m_workbook.sheetExists(command.getParam<std::string>("cloneName")))
                throw XLInternalError("Sheet named \"" + command.getParam<std::string>("cloneName") + "\" already exists.");

            if (m_wbkRelationships.relationshipById(command.getParam<std::string>("sheetID")).type() == XLRelationshipType::Worksheet) {
                m_contentTypes.addOverride(sheetPath, XLContentType::Worksheet);
                m_wbkRelationships.addRelationship(XLRelationshipType::Worksheet, sheetPath.substr(4));
                m_appProperties.appendSheetName(command.getParam<std::string>("cloneName"));
                m_archive.addEntry(sheetPath.substr(1), std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& data) {
                                                            return data.getXmlPath().substr(3) ==
                                                                   m_wbkRelationships.relationshipById(command.getParam<std::string>
                                                                       ("sheetID")).target();
                                                        })->getRawData());
                m_data.emplace_back(
                    /* parentDoc */ this,
                    /* xmlPath   */ sheetPath.substr(1),
                    /* xmlID     */ m_wbkRelationships.relationshipByTarget(sheetPath.substr(4)).id(),
                    /* xmlType   */ XLContentType::Worksheet);
            }
            else {
                m_contentTypes.addOverride(sheetPath, XLContentType::Chartsheet);
                m_wbkRelationships.addRelationship(XLRelationshipType::Chartsheet, sheetPath.substr(4));
                m_appProperties.appendSheetName(command.getParam<std::string>("cloneName"));
                m_archive.addEntry(sheetPath.substr(1), std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& data) {
                                                            return data.getXmlPath().substr(3) ==
                                                                   m_wbkRelationships.relationshipById(command.getParam<std::string>
                                                                       ("sheetID")).target();
                                                        })->getRawData());
                m_data.emplace_back(
                    /* parentDoc */ this,
                    /* xmlPath   */ sheetPath.substr(1),
                    /* xmlID     */ m_wbkRelationships.relationshipByTarget(sheetPath.substr(4)).id(),
                    /* xmlType   */ XLContentType::Chartsheet);
            }

            m_workbook.prepareSheetMetadata(command.getParam<std::string>("cloneName"), internalID);
        }
            break;
    }
}

/**
 * @details
 */
XLQuery XLDocument::execQuery(const XLQuery& query) const
{

    switch (query.type()) {
        case XLQueryType::QuerySheetName:
            return XLQuery(query).setResult(m_workbook.sheetName(query.getParam<std::string>("sheetID")));

        case XLQueryType::QuerySheetIndex:
            return query;

        case XLQueryType::QuerySheetVisibility:
            return XLQuery(query).setResult(m_workbook.sheetVisibility(query.getParam<std::string>("sheetID")));

        case XLQueryType::QuerySheetType:
            if (m_wbkRelationships.relationshipById(query.getParam<std::string>("sheetID")).type() == XLRelationshipType::Worksheet)
                return XLQuery(query).setResult(XLContentType::Worksheet);
            else
                return XLQuery(query).setResult(XLContentType::Chartsheet);

        case XLQueryType::QuerySheetIsActive:
            return XLQuery(query).setResult(m_workbook.sheetIsActive(query.getParam<std::string>("sheetID")));

        case XLQueryType::QuerySheetID:
            return XLQuery(query).setResult(m_workbook.sheetVisibility(query.getParam<std::string>("sheetID")));

        case XLQueryType::QuerySheetRelsID:
            return XLQuery(query).setResult(m_wbkRelationships.relationshipByTarget(query.getParam<std::string>("sheetPath").substr(4)).id());

        case XLQueryType::QuerySheetRelsTarget:
            return XLQuery(query).setResult(m_wbkRelationships.relationshipById(query.getParam<std::string>("sheetID")).target());

        case XLQueryType::QuerySharedStrings:
            return XLQuery(query).setResult(m_sharedStrings);

        case XLQueryType::QueryXmlData:
            {
                auto result =
                    std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) { return item.getXmlPath() == query.getParam<std::string>("xmlPath"); });
                if (result == m_data.end()) throw XLInternalError("Path does not exist in zip archive (" + query.getParam<std::string>("xmlPath") + ")");
                return XLQuery(query).setResult(&*result);
            }
    }

    return query; // Needed in order to suppress compiler warning
}

/**
 * @details
 */
XLQuery XLDocument::execQuery(const XLQuery& query)
{
    return static_cast<const XLDocument&>(*this).execQuery(query);
}

/**
 * @details
 */
XLDocument::operator bool() const
{
    return !!m_archive; // NOLINT
}

/**
 * @details
 */
XLXmlData* XLDocument::getXmlData(const std::string& path)
{
    if (!hasXmlData(path)) throw XLInternalError("Path does not exist in zip archive.");
    return &*std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) { return item.getXmlPath() == path; });
//    auto result = std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) { return item.getXmlPath() == path; });
//    if (result == m_data.end()) throw XLInternalError("Path does not exist in zip archive.");
//    return &*result;
}

/**
 * @details
 */
const XLXmlData* XLDocument::getXmlData(const std::string& path) const
{
    if (!hasXmlData(path)) throw XLInternalError("Path does not exist in zip archive.");
    return &*std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) { return item.getXmlPath() == path; });
//    if (result == m_data.end()) throw XLInternalError("Path does not exist in zip archive.");
//    return &*result;
}

/**
 * @details
 */
bool XLDocument::hasXmlData(const std::string& path) const
{
    return std::find_if(m_data.begin(), m_data.end(), [&](const XLXmlData& item) { return item.getXmlPath() == path; }) != m_data.end();
}

/**
 * @details
 */
std::string XLDocument::extractXmlFromArchive(const std::string& path)
{
    return (m_archive.hasEntry(path) ? m_archive.getEntry(path) : "");
}

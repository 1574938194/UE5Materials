//
// Created by Kenneth Balslev on 15/08/2021.
//

#ifndef OPENXLSX_XLCONSTANTS_HPP
#define OPENXLSX_XLCONSTANTS_HPP

namespace OpenXLSX
{
#if __cplusplus >=201703L
    inline const uint16_t MAX_COLS = 16'384;
    inline const uint32_t MAX_ROWS = 1'048'576;
#else 
#define MAX_COLS 16'384
#define MAX_ROWS 1'048'576
#endif
}    // namespace OpenXLSX

#endif    // OPENXLSX_XLCONSTANTS_HPP

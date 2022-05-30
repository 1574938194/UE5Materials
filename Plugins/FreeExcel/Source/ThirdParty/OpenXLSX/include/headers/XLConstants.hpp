//
// Created by Kenneth Balslev on 15/08/2021.
//

#ifndef OPENXLSX_XLCONSTANTS_HPP
#define OPENXLSX_XLCONSTANTS_HPP


#if __cplusplus >=201703L
namespace OpenXLSX
{
    inline const uint16_t MAX_COLS = 16'384;
    inline const uint32_t MAX_ROWS = 1'048'576;
}    // namespace OpenXLSX
#else 
class MaxConstant
{
public:
    static constexpr uint16_t MAX_COLS = 16'384;
    static constexpr uint32_t MAX_ROWS = 1'048'576;
};
#endif


#endif    // OPENXLSX_XLCONSTANTS_HPP

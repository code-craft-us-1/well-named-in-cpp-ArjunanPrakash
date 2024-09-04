#ifndef COLOR_CONSTANTS_H
#define COLOR_CONSTANTS_H

#include "ColorTypes.h"
#include <array>
#include <string_view>

namespace TelCoColorCoder {

    // Constants using std::array and constexpr for compile-time evaluation
    constexpr std::array<std::string_view, 5> MajorColorNames = { "White", "Red", "Black", "Yellow", "Violet" };
    constexpr std::array<std::string_view, 5> MinorColorNames = { "Blue", "Orange", "Green", "Brown", "Slate" };

    constexpr int numberOfMajorColors = MajorColorNames.size();
    constexpr int numberOfMinorColors = MinorColorNames.size();

}

#endif // COLOR_CONSTANTS_H

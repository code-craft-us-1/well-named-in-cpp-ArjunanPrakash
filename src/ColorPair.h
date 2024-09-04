#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>
#include "ColorTypes.h"

namespace TelCoColorCoder {

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

    public:
        constexpr ColorPair(MajorColor major, MinorColor minor) noexcept
            : majorColor(major), minorColor(minor) {}

        [[nodiscard]] MajorColor getMajor() const noexcept;
        [[nodiscard]] MinorColor getMinor() const noexcept;
    };

}

#endif // COLOR_PAIR_H

#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include "ColorTypes.h"

namespace TelCoColorCoder {

    class ColorPair {
    public:
        ColorPair(MajorColor major, MinorColor minor)
            : majorColor(major), minorColor(minor) {}

        [[nodiscard]] MajorColor getMajor() const noexcept;
        [[nodiscard]] MinorColor getMinor() const noexcept;

    private:
        MajorColor majorColor;
        MinorColor minorColor;
    };

} // namespace TelCoColorCoder

#endif // COLOR_PAIR_H
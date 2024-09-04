#ifndef COLOR_CODER_H
#define COLOR_CODER_H

#include "ColorPair.h"

namespace TelCoColorCoder {

    class ColorCoder {
    public:
        static constexpr ColorPair GetColorFromPairNumber(int pairNumber);
        static constexpr int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    };

}

#endif // COLOR_CODER_H

#include "ColorCoder.h"
#include "ColorConstants.h"

namespace TelCoColorCoder {

    ColorPair ColorCoder::GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int ColorCoder::GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
    }

}
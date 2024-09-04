#include "ColorPairFactory.h"

namespace TelCoColorCoder {

    std::unique_ptr<ColorPair> ColorPairFactory::createColorPair(MajorColor major, MinorColor minor) {
        return std::make_unique<ColorPair>(major, minor);
    }

}

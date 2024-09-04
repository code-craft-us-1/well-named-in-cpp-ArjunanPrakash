#ifndef COLOR_PAIR_FACTORY_H
#define COLOR_PAIR_FACTORY_H

#include "ColorPair.h"
#include <memory>

namespace TelCoColorCoder {

    class ColorPairFactory {
    public:
        static std::unique_ptr<ColorPair> createColorPair(MajorColor major, MinorColor minor);
    };

}

#endif // COLOR_PAIR_FACTORY_H

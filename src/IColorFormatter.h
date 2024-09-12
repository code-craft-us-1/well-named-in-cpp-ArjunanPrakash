#ifndef ICOLOR_FORMATTER_H
#define ICOLOR_FORMATTER_H

#include <string>
#include "ColorTypes.h"

namespace TelCoColorCoder {

    class IColorFormatter {
    public:
        virtual ~IColorFormatter() = default;
        virtual std::string formatColorPair(MajorColor major, MinorColor minor) const = 0;
    };

}

#endif // ICOLOR_FORMATTER_H
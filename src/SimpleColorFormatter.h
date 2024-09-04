#ifndef SIMPLE_COLOR_FORMATTER_H
#define SIMPLE_COLOR_FORMATTER_H

#include "IColorFormatter.h"
#include "ColorConstants.h"

namespace TelCoColorCoder {

    class SimpleColorFormatter : public IColorFormatter {
    public:
        std::string formatColorPair(MajorColor major, MinorColor minor) const override;
    };

}

#endif // SIMPLE_COLOR_FORMATTER_H

#include "ColorPair.h"

namespace TelCoColorCoder {

    MajorColor ColorPair::getMajor() const noexcept {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() const noexcept {
        return minorColor;
    }

} // namespace TelCoColorCoder
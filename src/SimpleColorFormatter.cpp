#include "SimpleColorFormatter.h"

namespace TelCoColorCoder {

    std::string SimpleColorFormatter::formatColorPair(MajorColor major, MinorColor minor) const {
        // Implement the method to format the color pair into a string.
        // Example implementation:
        return "MajorColor: " + std::to_string(static_cast<int>(major)) +
            ", MinorColor: " + std::to_string(static_cast<int>(minor));
    }

} // namespace TelCoColorCoder

#include "SimpleColorFormatter.h"
#include <sstream>

namespace TelCoColorCoder {

    std::string SimpleColorFormatter::formatColorPair(MajorColor major, MinorColor minor) const {
        std::ostringstream oss;
        oss << MajorColorNames[static_cast<int>(major)] << " "
            << MinorColorNames[static_cast<int>(minor)];
        return oss.str();
    }

}

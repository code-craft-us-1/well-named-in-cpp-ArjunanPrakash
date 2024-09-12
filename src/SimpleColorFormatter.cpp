#include "SimpleColorFormatter.h"
#include "ColorTypes.h"

namespace TelCoColorCoder {

    // Function to convert MajorColor enum to a string
    std::string majorColorToString(MajorColor major) {
        switch (major) {
            case MajorColor::WHITE: return "White";
            case MajorColor::RED: return "Red";
            case MajorColor::BLACK: return "Black";
            case MajorColor::YELLOW: return "Yellow";
            case MajorColor::VIOLET: return "Violet";
            default: return "Unknown";
        }
    }

    // Function to convert MinorColor enum to a string
    std::string minorColorToString(MinorColor minor) {
        switch (minor) {
            case MinorColor::BLUE: return "Blue";
            case MinorColor::ORANGE: return "Orange";
            case MinorColor::GREEN: return "Green";
            case MinorColor::BROWN: return "Brown";
            case MinorColor::SLATE: return "Slate";
            default: return "Unknown";
        }
    }

    std::string SimpleColorFormatter::formatColorPair(MajorColor major, MinorColor minor) const {
        // Format the color pair with actual color names
        return "MajorColor: " + majorColorToString(major) +
               ", MinorColor: " + minorColorToString(minor);
    }

} // namespace TelCoColorCoder

#ifndef COLOR_TYPES_H
#define COLOR_TYPES_H

namespace TelCoColorCoder {

    // Using enum class for type safety
    using MajorColor = enum class { WHITE, RED, BLACK, YELLOW, VIOLET };
    using MinorColor = enum class { BLUE, ORANGE, GREEN, BROWN, SLATE };

}

#endif // COLOR_TYPES_H

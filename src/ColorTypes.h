#ifndef COLOR_TYPES_H
#define COLOR_TYPES_H

enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

// Functions to get the number of colors
constexpr int getNumberOfMajorColors() {
    return static_cast<int>(MajorColor::VIOLET) + 1; // Last enum value + 1
}

constexpr int getNumberOfMinorColors() {
    return static_cast<int>(MinorColor::SLATE) + 1; // Last enum value + 1
}

#endif // COLOR_TYPES_H

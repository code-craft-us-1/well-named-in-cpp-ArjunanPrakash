#include <iostream>
#include "../src/ColorPairFactory.h"
#include "../src/SimpleColorFormatter.h"

int main() {
    using namespace TelCoColorCoder;

    // Create a ColorPair using the Factory pattern
    auto colorPair = ColorPairFactory::createColorPair(MajorColor::WHITE, MinorColor::BLUE);
    SimpleColorFormatter formatter;

    // Display the formatted color pair
    std::cout << "Formatted Color Pair: " << formatter.formatColorPair(colorPair->getMajor(), colorPair->getMinor()) << std::endl;

    return 0;
}

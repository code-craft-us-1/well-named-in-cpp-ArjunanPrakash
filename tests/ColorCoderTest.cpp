#include "ColorCoderTest.h"

int main() {
    using namespace TelCoColorCoder;

    // Run tests to validate the implementation
    testNumberToPair(4, MajorColor::WHITE, MinorColor::BROWN);
    testNumberToPair(5, MajorColor::WHITE, MinorColor::SLATE);

    testPairToNumber(MajorColor::BLACK, MinorColor::ORANGE, 12);
    testPairToNumber(MajorColor::VIOLET, MinorColor::SLATE, 25);

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}

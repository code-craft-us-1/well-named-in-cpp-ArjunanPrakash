#ifndef COLOR_CODER_TEST_H
#define COLOR_CODER_TEST_H

#include <iostream>
#include <cassert>
#include "../src/ColorCoder.h"
#include "../src/SimpleColorFormatter.h"

namespace TelCoColorCoder {

    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
        ColorPair colorPair = ColorCoder::GetColorFromPairNumber(pairNumber);
        SimpleColorFormatter formatter;
        std::cout << "Got pair " << formatter.formatColorPair(colorPair.getMajor(), colorPair.getMinor()) << std::endl;
        assert(colorPair.getMajor() == expectedMajor);
        assert(colorPair.getMinor() == expectedMinor);
    }

    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
        int pairNumber = ColorCoder::GetPairNumberFromColor(major, minor);
        SimpleColorFormatter formatter;
        std::cout << "Got pair number " << pairNumber << " for "
                  << formatter.formatColorPair(major, minor) << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

    // New function to print the reference manual
    void printReferenceManual() {
        SimpleColorFormatter formatter;
        constexpr int numberOfMajorColors = getNumberOfMajorColors();
        constexpr int numberOfMinorColors = getNumberOfMinorColors();

        std::cout << "Color Code Reference Manual:\n";
        for (int major = 0; major < numberOfMajorColors; ++major) {
            for (int minor = 0; minor < numberOfMinorColors; ++minor) {
                MajorColor majorColor = static_cast<MajorColor>(major);
                MinorColor minorColor = static_cast<MinorColor>(minor);
                int pairNumber = ColorCoder::GetPairNumberFromColor(majorColor, minorColor);
                std::cout << "Pair Number: " << pairNumber << " -> "
                          << formatter.formatColorPair(majorColor, minorColor) << std::endl;
            }
        }
    }

}

#endif // COLOR_CODER_TEST_H

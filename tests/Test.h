#ifndef TEST_H
#define TEST_H

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
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }

}

#endif // TEST_H

//
// Created by hloi on 12/14/2021.
//

#ifndef CSC109CH10INHERIT_TESTWRITINGTESTSTUTORIAL_H
#define CSC109CH10INHERIT_TESTWRITINGTESTSTUTORIAL_H


#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "Vehicle.h"
class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Vehicle<double> v1;
        double* s = new double;
        *s = -1.0;
        TS_ASSERT_THROWS_ANYTHING(v1.SetSpeed(s));
        *s = 10;
        TS_ASSERT_THROWS_NOTHING(v1.SetSpeed(s));
    }
};


#endif //CSC109CH10INHERIT_TESTWRITINGTESTSTUTORIAL_H

#include "CoefficientTests.h"
#include "../Coefficient.h"


CPPUNIT_TEST_SUITE_REGISTRATION(CoefficientTests);

CoefficientTests::CoefficientTests() {
}

CoefficientTests::~CoefficientTests() {
}

void CoefficientTests::setUp() {
}

void CoefficientTests::tearDown() {
}

void CoefficientTests::default_constructor_should_set_value_to_zero() {
    Coefficient coefficient;
    CPPUNIT_ASSERT(coefficient.toInt() == 0);
}

void CoefficientTests::toInt_should_convert_and_return_the_value_to_int() {
    Coefficient coefficient = Coefficient(1);
    CPPUNIT_ASSERT(coefficient.toInt() == 1);
}
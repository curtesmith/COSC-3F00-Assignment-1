#include "ExponentTests.h"
#include "../Exponent.h"


CPPUNIT_TEST_SUITE_REGISTRATION(ExponentTests);

ExponentTests::ExponentTests() {
}

ExponentTests::~ExponentTests() {
}

void ExponentTests::setUp() {
}

void ExponentTests::tearDown() {
}

void ExponentTests::default_constructor_should_set_value_to_zero() {
    Exponent exponent;
    CPPUNIT_ASSERT(exponent.toInt() == 0);
}

void ExponentTests::toInt_should_convert_and_return_the_value_to_int() {
    Exponent exponent("1");
    CPPUNIT_ASSERT(exponent.toInt() == 1);
}

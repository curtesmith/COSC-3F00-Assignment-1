#include "StringHelperTests.h"
#include "../StringHelper.h"
#include <list>

CPPUNIT_TEST_SUITE_REGISTRATION(StringHelperTests);

StringHelperTests::StringHelperTests() {
}

StringHelperTests::~StringHelperTests() {
}

void StringHelperTests::setUp() {
}

void StringHelperTests::tearDown() {
}

void StringHelperTests::calling_convertStringToInt_should_return_an_integer_value_of_the_string() {
    std::string integer = "1234";
    CPPUNIT_ASSERT(StringHelper::convertStringToInt(integer) == 1234);
}

void StringHelperTests::calling_getListOfTokens_should_return_a_list_of_strings() {
    std::string polynomials = "1 2 3 4";
    std::list<std::string> tokens = StringHelper::getListOfTokens(polynomials, " ");
    CPPUNIT_ASSERT(tokens.size() == 4);
}
#ifndef STRINGHELPERTESTS_H
#define	STRINGHELPERTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class StringHelperTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(StringHelperTests);

    CPPUNIT_TEST(calling_convertStringToInt_should_return_an_integer_value_of_the_string);
    CPPUNIT_TEST(calling_getListOfTokens_should_return_a_list_of_strings);

    CPPUNIT_TEST_SUITE_END();

public:
    StringHelperTests();
    virtual ~StringHelperTests();
    void setUp();
    void tearDown();

private:
    void calling_convertStringToInt_should_return_an_integer_value_of_the_string();
    void calling_getListOfTokens_should_return_a_list_of_strings();
};

#endif	/* STRINGHELPERTESTS_H */


#ifndef EXPONENTTESTS_H
#define	EXPONENTTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class ExponentTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(ExponentTests);

    CPPUNIT_TEST(default_constructor_should_set_value_to_zero);
    CPPUNIT_TEST(toInt_should_convert_and_return_the_value_to_int);
    CPPUNIT_TEST(calling_constructor_with_exponent_should_clone_the_exponent);

    CPPUNIT_TEST_SUITE_END();

public:
    ExponentTests();
    virtual ~ExponentTests();
    void setUp();
    void tearDown();

private:
    void default_constructor_should_set_value_to_zero();
    void calling_constructor_with_exponent_should_clone_the_exponent();
    void toInt_should_convert_and_return_the_value_to_int();
};

#endif	/* EXPONENTTESTS_H */


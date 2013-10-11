#ifndef COEFFICIENTTESTS_H
#define	COEFFICIENTTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class CoefficientTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(CoefficientTests);

    CPPUNIT_TEST(default_constructor_should_set_value_to_zero);
    CPPUNIT_TEST(toInt_should_convert_and_return_the_value_to_int);
    CPPUNIT_TEST(setValue_should_update_the_value);
    CPPUNIT_TEST(calling_constructor_with_a_coefficient_argument_should_clone_the_coefficient);

    CPPUNIT_TEST_SUITE_END();

public:
    CoefficientTests();
    virtual ~CoefficientTests();
    void setUp();
    void tearDown();

private:
    void default_constructor_should_set_value_to_zero();
    void toInt_should_convert_and_return_the_value_to_int();
    void setValue_should_update_the_value();
    void calling_constructor_with_a_coefficient_argument_should_clone_the_coefficient();
};

#endif	/* COEFFICIENTTESTS_H */


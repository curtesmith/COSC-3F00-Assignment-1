#ifndef POLYNOMIALTESTS_H
#define	POLYNOMIALTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class PolynomialTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PolynomialTests);

    CPPUNIT_TEST(calling_the_constructor_should_initialize_the_linked_list);
    CPPUNIT_TEST(calling_fill_should_populate_the_nodes_of_the_linked_list);
    CPPUNIT_TEST(calling_toString_should_return_a_string_representation);

    CPPUNIT_TEST_SUITE_END();

public:
    PolynomialTests();
    virtual ~PolynomialTests();
    void setUp();
    void tearDown();

private:
    void calling_the_constructor_should_initialize_the_linked_list();
    void calling_fill_should_populate_the_nodes_of_the_linked_list();
    void calling_toString_should_return_a_string_representation();
};

#endif	/* POLYNOMIALTESTS_H */


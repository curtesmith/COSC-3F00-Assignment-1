#ifndef POLYNOMIALTESTS_H
#define	POLYNOMIALTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class PolynomialTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PolynomialTests);

    CPPUNIT_TEST(calling_the_constructor_should_initialize_the_linked_list);

    CPPUNIT_TEST_SUITE_END();

public:
    PolynomialTests();
    virtual ~PolynomialTests();
    void setUp();
    void tearDown();

private:
    void calling_the_constructor_should_initialize_the_linked_list();
};

#endif	/* POLYNOMIALTESTS_H */


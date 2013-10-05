/*
 * File:   Coefficient_ctor.h
 * Author: Curtis
 *
 * Created on 4-Oct-2013, 8:57:02 PM
 */

#ifndef COEFFICIENT_CTOR_H
#define	COEFFICIENT_CTOR_H

#include <cppunit/extensions/HelperMacros.h>

class Coefficient_ctor : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Coefficient_ctor);

    CPPUNIT_TEST(testCoefficient);

    CPPUNIT_TEST_SUITE_END();

public:
    Coefficient_ctor();
    virtual ~Coefficient_ctor();
    void setUp();
    void tearDown();

private:
    void testCoefficient();

};

#endif	/* COEFFICIENT_CTOR_H */


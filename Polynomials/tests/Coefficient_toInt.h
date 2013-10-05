/*
 * File:   Coefficient_toInt.h
 * Author: Curtis
 *
 * Created on 4-Oct-2013, 8:43:59 PM
 */

#ifndef COEFFICIENT_TOINT_H
#define	COEFFICIENT_TOINT_H

#include <cppunit/extensions/HelperMacros.h>

class Coefficient_toInt : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(Coefficient_toInt);

    CPPUNIT_TEST(testToInt);

    CPPUNIT_TEST_SUITE_END();

public:
    Coefficient_toInt();
    virtual ~Coefficient_toInt();
    void setUp();
    void tearDown();

private:
    void testToInt();

};

#endif	/* COEFFICIENT_TOINT_H */


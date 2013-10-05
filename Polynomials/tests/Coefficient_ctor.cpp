/*
 * File:   Coefficient_ctor.cpp
 * Author: Curtis
 *
 * Created on 4-Oct-2013, 8:57:02 PM
 */

#include "Coefficient_ctor.h"
#include "../Coefficient.h"


CPPUNIT_TEST_SUITE_REGISTRATION(Coefficient_ctor);

Coefficient_ctor::Coefficient_ctor() {
}

Coefficient_ctor::~Coefficient_ctor() {
}

void Coefficient_ctor::setUp() {
}

void Coefficient_ctor::tearDown() {
}

void Coefficient_ctor::testCoefficient() {
    Coefficient coefficient;
    CPPUNIT_ASSERT(coefficient.toInt() == 0);
}


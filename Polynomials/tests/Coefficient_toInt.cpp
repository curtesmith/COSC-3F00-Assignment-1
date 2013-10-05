/*
 * File:   Coefficient_toInt.cpp
 * Author: Curtis
 *
 * Created on 4-Oct-2013, 8:43:59 PM
 */

#include "Coefficient_toInt.h"
#include "../Coefficient.h"


CPPUNIT_TEST_SUITE_REGISTRATION(Coefficient_toInt);

Coefficient_toInt::Coefficient_toInt() {
}

Coefficient_toInt::~Coefficient_toInt() {
}

void Coefficient_toInt::setUp() {
}

void Coefficient_toInt::tearDown() {
}

void Coefficient_toInt::testToInt() {
    Coefficient coefficient = Coefficient(1);
    CPPUNIT_ASSERT(coefficient.toInt() == 1);
}


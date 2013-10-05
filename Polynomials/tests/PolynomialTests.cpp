#include "PolynomialTests.h"
#include "../Polynomial.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PolynomialTests);

PolynomialTests::PolynomialTests() {
}

PolynomialTests::~PolynomialTests() {
}

void PolynomialTests::setUp() {
}

void PolynomialTests::tearDown() {
}

void PolynomialTests::calling_the_constructor_should_initialize_the_linked_list() {
    Polynomial* sut = new Polynomial();
    CPPUNIT_ASSERT(sut->getLinkedList() != NULL);
}

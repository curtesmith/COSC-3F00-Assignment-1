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

void PolynomialTests::calling_fill_should_populate_the_nodes_of_the_linked_list() {
    std::string polynomial = "2 3 4 2";
    Polynomial* sut = new Polynomial();
    sut->fill(polynomial);
    int size = sut->getLinkedList()->size();
    CPPUNIT_ASSERT_MESSAGE("At least the fill method worked", size == 2);
}

void PolynomialTests::calling_toString_should_return_a_string_representation() {
    std::string polynomial = "-4 2 5 3 -2 1";
    Polynomial* sut = new Polynomial();
    sut->fill(polynomial);
    std::string result = sut->toString();
    CPPUNIT_ASSERT(result == "5x3 -4x2 -2x1");
}


void PolynomialTests::calling_merge_should_add_two_polynomials_together() {
    Polynomial* p = new Polynomial();
    Polynomial* sut = new Polynomial();
    p->fill("-4 2 5 3 -2 1");
    sut->fill("-1 3");
    sut->merge(p);
    std::string newPolynomial = sut->toString();
    //CPPUNIT_ASSERT_MESSAGE(p->toString(), p->toString() == "5x3 -4x2 -2x1");
    CPPUNIT_ASSERT_MESSAGE(newPolynomial, newPolynomial == "4x3 -4x2 -2x1");
    //CPPUNIT_ASSERT(false);

}
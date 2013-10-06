#include "NodeTests.h"
#include "../Node.h"
#include <cstring>


CPPUNIT_TEST_SUITE_REGISTRATION(NodeTests);

NodeTests::NodeTests() {
}

NodeTests::~NodeTests() {
}

void NodeTests::setUp() {
}

void NodeTests::tearDown() {
}

void NodeTests::calling_setNextNode_should_assign_a_value_to_the_nextNode() {
    Node sut = *createNode("2","3");
    Node nextNode = *createNode("3","4");
    sut.setAddressOfNextNode(&nextNode);
    CPPUNIT_ASSERT(sut.getAddressOfNextNode() != NULL);
}

void NodeTests::calling_getCoefficient_should_return_the_coefficient_value() {
    Node * sut = createNode("2","3");
    Coefficient* coefficient = sut->getAddressOfCoefficient();
    CPPUNIT_ASSERT(coefficient->toInt() == 2);
}

void NodeTests::calling_getExponent_should_return_the_exponent_value() {
    Node * sut = createNode("2","3");
    Exponent* exponent = sut->getAddressOfExponent();
    CPPUNIT_ASSERT(exponent->toInt() == 3);
}


Node * NodeTests::createNode(std::string coefficient, std::string exponent) {
    Node node (new Coefficient(coefficient), new Exponent(exponent));
    return &node;
}


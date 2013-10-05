/*
 * File:   NodeTests.cpp
 * Author: Curtis
 *
 * Created on 4-Oct-2013, 10:39:51 PM
 */

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
    Node* sut = createNode(2,3);
    Node* nextNode = createNode(3,4);
    sut->setNextNode(nextNode);
    CPPUNIT_ASSERT(sut->getNextNode() != NULL);
}

void NodeTests::calling_getCoefficient_should_return_the_coefficient_value() {
    Node* sut = createNode(2,3);
    Coefficient* coefficient = sut->getCoefficient();
    CPPUNIT_ASSERT(coefficient->toInt() == 2);
}

void NodeTests::calling_getExponent_should_return_the_exponent_value() {
    Node* sut = createNode(2,3);
    Exponent* exponent = sut->getExponent();
    CPPUNIT_ASSERT(exponent->toInt() == 3);
}


Node* NodeTests::createNode(int coefficient, int exponent) {
    return new Node(new Coefficient(coefficient), new Exponent(exponent));
}


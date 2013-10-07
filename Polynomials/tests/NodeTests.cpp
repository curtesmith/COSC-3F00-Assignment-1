/*
 * File:   NodeTests.cpp
 * Author: Curtis
 *
 * Created on 6-Oct-2013, 8:39:42 PM
 */

#include "NodeTests.h"
#include "../Node.h"


CPPUNIT_TEST_SUITE_REGISTRATION(NodeTests);

NodeTests::NodeTests() {
}

NodeTests::~NodeTests() {
}

void NodeTests::setUp() {
}

void NodeTests::tearDown() {
}

void NodeTests::calling_compareTo_against_a_smaller_node_should_return_positive() {
    Node* bigNode = createNode("1", "4");
    Node* littleNode = createNode("5", "2");
    int result = bigNode->compareTo(littleNode);
    CPPUNIT_ASSERT(result == 1);
}

void NodeTests::calling_compareTo_against_a_larger_node_should_return_negative() {
    Node* bigNode = createNode("1", "4");
    Node* littleNode = createNode("5", "2");
    int result = littleNode->compareTo(bigNode);
    CPPUNIT_ASSERT(result == -1);
}

void NodeTests::calling_compareTo_against_an_equal_node_should_return_zero() {
    Node* node = createNode("1", "2");
    Node* equalNode = createNode("5", "2");
    int result = node->compareTo(equalNode);
    CPPUNIT_ASSERT(result == 0);
}

Node* NodeTests::createNode(std::string coefficient, std::string exponent) {
    return new Node(new Coefficient(coefficient), new Exponent(exponent));
}

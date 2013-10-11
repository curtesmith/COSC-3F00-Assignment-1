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

void NodeTests::calling_to_string_should_return_a_readable_form_of_the_node() {
    Node* sut = createNode("2", "3");
    CPPUNIT_ASSERT(sut->toString() == "2x3");
}

void NodeTests::calling_add_should_add_the_coefficients_of_two_nodes_and_return_a_new_node() {
    Node* sut = createNode("3", "2");
    Node* anotherNode = createNode("2", "2");
    Node* result = sut->add(anotherNode);
    CPPUNIT_ASSERT(result->getCoefficient()->toInt() == 5);
}

void NodeTests::calling_constructor_with_node_should_clone_the_node() {
    Node* clone = createNode("3", "2");
    Node sut(*clone);
    CPPUNIT_ASSERT(&sut != clone);
}
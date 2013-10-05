#include "LinkedListTests.h"
#include "../LinkedList.h"
#include "../Coefficient.h"
#include "../Exponent.h"
#include "../Node.h"


CPPUNIT_TEST_SUITE_REGISTRATION(LinkedListTests);

LinkedListTests::LinkedListTests() {
}

LinkedListTests::~LinkedListTests() {
}

void LinkedListTests::setUp() {
}

void LinkedListTests::tearDown() {
}

void LinkedListTests::calling_setRootNode_should_assign_the_node_to_the_rootNode() {
    LinkedList* sut = new LinkedList();
    Coefficient* coefficient = new Coefficient(2);
    Exponent* exponent = new Exponent(3);
    Node* rootNode = new Node(coefficient, exponent);
    sut->setRootNode(rootNode);
    CPPUNIT_ASSERT(sut->getRootNode() != NULL);
}

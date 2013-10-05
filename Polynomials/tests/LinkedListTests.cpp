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
    Node* rootNode = createRandomNode();
    sut->setRootNode(rootNode);
    CPPUNIT_ASSERT(sut->getRootNode() != NULL);
}

Node* LinkedListTests::createRandomNode() {
    Coefficient* coefficient = new Coefficient(2);
    Exponent* exponent = new Exponent(3);
    return new Node(coefficient, exponent);
}

void LinkedListTests::calling_addNode_should_add_the_node_to_the_end_of_the_linkedlist() {
    LinkedList* sut = new LinkedList();
    Node* root = createRandomNode();
    sut->setRootNode(root);
    Node* anotherNode = createRandomNode();
    sut->addNode(anotherNode);
    CPPUNIT_ASSERT(sut->getRootNode()->getNextNode() != NULL);
}

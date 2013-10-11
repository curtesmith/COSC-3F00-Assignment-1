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


Node* LinkedListTests::createNode(std::string coefficient, std::string exponent) {
    return new Node(new Coefficient(coefficient), new Exponent(exponent));    
}

void LinkedListTests::calling_insertNode() {
    LinkedList* sut = createLinkedList();
    CPPUNIT_ASSERT(sut->size() == 3);
}

LinkedList* LinkedListTests::createLinkedList() {
    LinkedList* sut = new LinkedList();
    Node* first = createNode("3", "2");
    Node* second = createNode("2", "3");
    Node* third = createNode("-1", "1");
    sut->insertNode(&first);
    sut->insertNode(&second);
    sut->insertNode(&third); 
    return sut;
}

void LinkedListTests::calling_toList_should_return_a_list_of_nodes() {
    LinkedList* sut = createLinkedList();
    std::list<Node> nodes = sut->toList();
    CPPUNIT_ASSERT(nodes.size() == 3);
}
#include <stdlib.h>

#include "LinkedListTests.h"
#include "../LinkedList.h"
#include "../Coefficient.h"
#include "../Exponent.h"
#include "../Node.h"
#include "../StringHelper.h"
#include <ctime>


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
    LinkedList* sut = createLinkedListWithThreeNodes();
    CPPUNIT_ASSERT(sut->size() == 3);
}

LinkedList* LinkedListTests::createLinkedListWithThreeNodes() {
    srand(time(NULL));
    LinkedList* sut = new LinkedList();
    for(int i=0; i<3; i++) {
        int coefficient = rand() %5;
        int exponent = rand() %3;
        Node* node = createNode(StringHelper::convertIntToString(coefficient), StringHelper::convertIntToString(exponent));
        sut->insertNode(&node);
    }
    return sut;
}

void LinkedListTests::calling_toList_should_return_a_list_of_nodes() {
    LinkedList* sut = createLinkedListWithThreeNodes();
    std::list<Node> nodes = sut->toList();
    CPPUNIT_ASSERT(nodes.size() == 3);
}

void LinkedListTests::calling_getNode_at_two_should_give_the_second_node() {
    LinkedList* sut = createLinkedListWithThreeNodes();
    Node** node = sut->getNode(1);
    
    CPPUNIT_ASSERT_MESSAGE("finish this test", *node == *(sut->begin()));
}
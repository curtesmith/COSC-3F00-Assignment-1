#include "PointerTests.h"
#include "../Node.h"
#include "../TestHelper.h"
#include "StringHelper.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PointerTests);


PointerTests::PointerTests() { }


PointerTests::~PointerTests() { }


void PointerTests::setUp() { }


void PointerTests::tearDown() { }


void PointerTests::assigning_the_address_of_one_pointer_to_the_other_pointer_makes_them_pointer_to_the_same_address() {
    Node* node1 = TestHelper::createRandomNode();
    Node* node2 = node1;
    
    CPPUNIT_ASSERT_MESSAGE(StringHelper::convertNodeToString(node1), node1 == node2);
}


void PointerTests::pointer_to_pointer_is_not_a_NULL_value_when_it_is_originally_declared() {
    Node** pointerToPointer;

    CPPUNIT_ASSERT_MESSAGE(StringHelper::convertPointerToString(pointerToPointer), pointerToPointer != NULL);
}

void PointerTests::inserting_a_node_between_two_nodes() {
    Node* first = TestHelper::createRandomNode();
    Node* last = TestHelper::createRandomNode();
    first->setNextNode(last);
    
    Node* newNode = TestHelper::createRandomNode();
    newNode->setNextNode(first->getNextNode());
    first->setNextNode(newNode);
    CPPUNIT_ASSERT_MESSAGE("finish this test", newNode->getNextNode() == last);
}
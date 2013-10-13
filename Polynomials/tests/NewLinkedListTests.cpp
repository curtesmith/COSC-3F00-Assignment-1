#include "NewLinkedListTests.h"
#include "../NewLinkedList.h"
#include "../Node.h"
#include "../TestHelper.h"
#include "../StringHelper.h"


CPPUNIT_TEST_SUITE_REGISTRATION(NewLinkedListTests);


NewLinkedListTests::NewLinkedListTests() { }


NewLinkedListTests::~NewLinkedListTests() { }


void NewLinkedListTests::setUp() { }


void NewLinkedListTests::tearDown() { }


void NewLinkedListTests::calling_begin_should_set_the_current_pointer_to_the_first_node() {
    NewLinkedList* sut = new NewLinkedList();
    Node* node = TestHelper::createRandomNode();
    sut->insert(node);
    sut->begin();
    sut->next();
    CPPUNIT_ASSERT_MESSAGE("begin did not set the current pointer to the first position", sut->current() == sut->getNode(0));
}


Node* NewLinkedListTests::createNode(std::string coefficient, std::string exponent) {
    return new Node(new Coefficient(coefficient), new Exponent(exponent));
}


void NewLinkedListTests::calling_insert_should_add_the_node_to_the_list() {
    NewLinkedList* sut = new NewLinkedList();
    Node* node = TestHelper::createRandomNode();
    Node** nodePointer = &node;
    sut->insert(node);
    CPPUNIT_ASSERT_MESSAGE("did not insert the node at position zero", sut->getNode(0) == node);
}


void NewLinkedListTests::calling_getNode_should_return_a_pointer_to_the_node_as_position() {
    NewLinkedList* sut = new NewLinkedList();
    CPPUNIT_ASSERT_MESSAGE("current is not set to position zero", sut->getNode(0) == sut->current());
}


void NewLinkedListTests::calling_next_should_move_the_current_pointer_to_the_next_node() {
    NewLinkedList* sut = new NewLinkedList();
    Node* node1 = TestHelper::createRandomNode();
    Node* node2 = TestHelper::createRandomNode();
    sut->insert(node1);
    sut->insert(node2);
    sut->begin();
    sut->next(); // moves the current pointer to the first node
    std::stringstream message;
    message << "current={" << StringHelper::convertNodeToString(sut->current())
            << "}, node={" << node2 << "}";
    CPPUNIT_ASSERT_MESSAGE(message.str(), sut->current() == node1);
}


void NewLinkedListTests::calling_end_should_return_true_if_there_are_zero_nodes() {
    NewLinkedList* sut = new NewLinkedList();
    sut->next(); // moves the current pointer to the first node
    CPPUNIT_ASSERT(sut->end() == true);
}
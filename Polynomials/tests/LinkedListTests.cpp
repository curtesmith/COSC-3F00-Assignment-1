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

void LinkedListTests::calling_getLastNodePointer_should_return_a_pointer_to_the_rootPointer() {
    LinkedList* sut = new LinkedList();
    CPPUNIT_ASSERT(sut->getAddressOfRootNodePointer() == sut->getAddressOfLastNodePointer());
}

void LinkedListTests::calling_addNode_should_assign_the_node_to_the_rootNode_first() {
    LinkedList* sut = new LinkedList();
    Node* rootNode = createRandomNode();
    sut->addNode(&rootNode);
    Node** addressOfRootNodePointer = sut->getAddressOfRootNodePointer();
    CPPUNIT_ASSERT(*addressOfRootNodePointer != NULL);
}

Node* LinkedListTests::createRandomNode() {
    Coefficient* coefficient = new Coefficient("2");
    Exponent* exponent = new Exponent("3");
    return new Node(coefficient, exponent);
}

void LinkedListTests::calling_addNode_should_add_the_node_to_the_end_of_the_linkedlist() {
    LinkedList sut;
    Node* root = createRandomNode();
    sut.setRootNode(root);
    Node* anotherNode = createRandomNode();
    sut.addNode(&anotherNode);
    std::cout << "\n sut->size() = {" << sut.size() << "}\n";
    CPPUNIT_ASSERT(sut.size() == 2);
    
}

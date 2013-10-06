#ifndef LINKEDLISTTESTS_H
#define	LINKEDLISTTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class LinkedListTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(LinkedListTests);

    CPPUNIT_TEST(calling_getLastNodePointer_should_return_a_pointer_to_the_rootPointer);
    CPPUNIT_TEST(calling_addNode_should_assign_the_node_to_the_rootNode_first);

    CPPUNIT_TEST_SUITE_END();

public:
    LinkedListTests();
    virtual ~LinkedListTests();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void calling_addNode_should_assign_the_node_to_the_rootNode_first();
    void calling_addNode_should_add_the_node_to_the_end_of_the_linkedlist();
    void calling_getLastNodePointer_should_return_a_pointer_to_the_rootPointer();
    Node* createRandomNode();
};

#endif	/* LINKEDLISTTESTS_H */


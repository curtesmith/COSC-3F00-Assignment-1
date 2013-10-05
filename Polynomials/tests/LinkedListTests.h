#ifndef LINKEDLISTTESTS_H
#define	LINKEDLISTTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class LinkedListTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(LinkedListTests);

    CPPUNIT_TEST(calling_setRootNode_should_assign_the_node_to_the_rootNode);
    CPPUNIT_TEST(calling_addNode_should_add_the_node_to_the_end_of_the_linkedlist);

    CPPUNIT_TEST_SUITE_END();

public:
    LinkedListTests();
    virtual ~LinkedListTests();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void calling_setRootNode_should_assign_the_node_to_the_rootNode();
    void calling_addNode_should_add_the_node_to_the_end_of_the_linkedlist();
    Node* createRandomNode();
};

#endif	/* LINKEDLISTTESTS_H */


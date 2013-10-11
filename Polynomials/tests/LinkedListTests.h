#ifndef LINKEDLISTTESTS_H
#define	LINKEDLISTTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"
#include "../LinkedList.h"

class LinkedListTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(LinkedListTests);

    CPPUNIT_TEST(calling_insertNode);
    CPPUNIT_TEST(calling_toList_should_return_a_list_of_nodes);

    CPPUNIT_TEST_SUITE_END();

public:
    LinkedListTests();
    virtual ~LinkedListTests();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void calling_insertNode();
    void calling_toList_should_return_a_list_of_nodes();
    Node* createNode(std::string coefficient, std::string exponent);
    LinkedList* createLinkedList();
};

#endif	/* LINKEDLISTTESTS_H */


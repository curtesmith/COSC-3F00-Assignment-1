#ifndef LINKEDLISTTESTS_H
#define	LINKEDLISTTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class LinkedListTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(LinkedListTests);

    CPPUNIT_TEST(calling_getLastNodePointer_should_return_a_pointer_to_the_rootPointer);;
    CPPUNIT_TEST(calling_insertNode);

    CPPUNIT_TEST_SUITE_END();

public:
    LinkedListTests();
    virtual ~LinkedListTests();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void calling_getLastNodePointer_should_return_a_pointer_to_the_rootPointer();
    void calling_insertNode();
    Node* createRandomNode();
    Node* createNode(std::string coefficient, std::string exponent);
};

#endif	/* LINKEDLISTTESTS_H */


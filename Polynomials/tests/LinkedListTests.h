#ifndef NEWLINKEDLISTTESTS_H
#define	NEWLINKEDLISTTESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class LinkedListTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(LinkedListTests);

    CPPUNIT_TEST(calling_begin_should_set_the_current_pointer_to_the_first_node);
    CPPUNIT_TEST(calling_insert_should_add_the_node_to_the_list);
    CPPUNIT_TEST(calling_getNode_should_return_a_pointer_to_the_node_as_position);
    CPPUNIT_TEST(calling_next_should_move_the_current_pointer_to_the_next_node);
    CPPUNIT_TEST(calling_end_should_return_true_if_there_are_zero_nodes);

    CPPUNIT_TEST_SUITE_END();

public:
    LinkedListTests();
    virtual ~LinkedListTests();
    void setUp();
    void tearDown();

private:
    void calling_begin_should_set_the_current_pointer_to_the_first_node();
    void calling_insert_should_add_the_node_to_the_list();
    void calling_getNode_should_return_a_pointer_to_the_node_as_position();
    void calling_next_should_move_the_current_pointer_to_the_next_node();
    void calling_end_should_return_true_if_there_are_zero_nodes();
    Node* createNode(std::string coefficient, std::string exponent);
};

#endif	/* NEWLINKEDLISTTESTS_H */


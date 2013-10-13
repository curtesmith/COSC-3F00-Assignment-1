#ifndef POINTERTESTS_H
#define	POINTERTESTS_H

#include <cppunit/extensions/HelperMacros.h>

class PointerTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PointerTests);

    CPPUNIT_TEST(assigning_the_address_of_one_pointer_to_the_other_pointer_makes_them_pointer_to_the_same_address);
    CPPUNIT_TEST(pointer_to_pointer_is_not_a_NULL_value_when_it_is_originally_declared);
    CPPUNIT_TEST(inserting_a_node_between_two_nodes);

    CPPUNIT_TEST_SUITE_END();

public:
    PointerTests();
    virtual ~PointerTests();
    void setUp();
    void tearDown();

private:
    void assigning_the_address_of_one_pointer_to_the_other_pointer_makes_them_pointer_to_the_same_address();
    void pointer_to_pointer_is_not_a_NULL_value_when_it_is_originally_declared();
    void inserting_a_node_between_two_nodes();
};

#endif	/* POINTERTESTS_H */


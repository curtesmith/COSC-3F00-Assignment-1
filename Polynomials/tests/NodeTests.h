/*
 * File:   NodeTests.h
 * Author: Curtis
 *
 * Created on 6-Oct-2013, 8:39:40 PM
 */

#ifndef NODETESTS_H
#define	NODETESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class NodeTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(NodeTests);

    CPPUNIT_TEST(calling_compareTo_against_a_smaller_node_should_return_positive);
    CPPUNIT_TEST(calling_compareTo_against_a_larger_node_should_return_negative);
    CPPUNIT_TEST(calling_compareTo_against_an_equal_node_should_return_zero);

    CPPUNIT_TEST_SUITE_END();

public:
    NodeTests();
    virtual ~NodeTests();
    void setUp();
    void tearDown();

private:
    void calling_compareTo_against_a_smaller_node_should_return_positive();
    void calling_compareTo_against_a_larger_node_should_return_negative();
    void calling_compareTo_against_an_equal_node_should_return_zero();
    Node* createNode(std::string coefficient, std::string exponent);
};

#endif	/* NODETESTS_H */


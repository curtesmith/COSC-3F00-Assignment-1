#ifndef NODETESTS_H
#define	NODETESTS_H

#include <cppunit/extensions/HelperMacros.h>
#include "../Node.h"

class NodeTests : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(NodeTests);

    CPPUNIT_TEST(calling_setNextNode_should_assign_a_value_to_the_nextNode);
    CPPUNIT_TEST(calling_getCoefficient_should_return_the_coefficient_value);
    CPPUNIT_TEST(calling_getExponent_should_return_the_exponent_value);

    CPPUNIT_TEST_SUITE_END();

public:
    NodeTests();
    virtual ~NodeTests();
    void setUp();
    void tearDown();

private:
    void calling_setNextNode_should_assign_a_value_to_the_nextNode();
    void calling_getCoefficient_should_return_the_coefficient_value();
    void calling_getExponent_should_return_the_exponent_value();
    Node * createNode(std::string coefficient, std::string exponent);
};

#endif	/* NODETESTS_H */


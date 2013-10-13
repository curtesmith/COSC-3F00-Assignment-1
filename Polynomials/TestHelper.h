#ifndef TESTHELPER_H
#define	TESTHELPER_H

#include "Node.h"

class TestHelper {
public:
    TestHelper();
    virtual ~TestHelper();
    static Node* createNode(std::string coefficient, std::string exponent);
    static Node* createRandomNode();
private:

};

#endif	/* TESTHELPER_H */


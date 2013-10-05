#include "Coefficient.h"
#include "Exponent.h"
#ifndef NODE_H
#define	NODE_H

class Node {
public:
    Node(Coefficient* coefficient, Exponent* exponent);
    virtual ~Node();
    void setNextNode(Node* nextNode);
    Node* getNextNode();
    Coefficient* getCoefficient();
    Exponent* getExponent();
private:
    Exponent* exponent;
    Coefficient* coefficient;
    Node* nextNode;
};

#endif	/* NODE_H */


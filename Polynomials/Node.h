#ifndef NODE_H
#define	NODE_H

#include "Coefficient.h"
#include "Exponent.h"

class Node {
public:
    Node(Coefficient* coefficient, Exponent* exponent);
    virtual ~Node();
    void setAddressOfNextNode(Node * nextNode);
    Node* getAddressOfNextNode();
    Coefficient* getAddressOfCoefficient();
    Exponent* getAddressOfExponent();
    Node** getAddressOfNextNodePointer();
    int compareTo(Node* anotherNode);
    std::string toString();
private:
    Exponent* addressOfExponent;
    Coefficient* addressOfCoefficient;
    Node* addressOfNextNode;
};

#endif	/* NODE_H */


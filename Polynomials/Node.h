#ifndef NODE_H
#define	NODE_H

#include "Coefficient.h"
#include "Exponent.h"

class Node {
public:
    Node(Coefficient* coefficient, Exponent* exponent);
    Node(Node* clone);
    virtual ~Node();
    void setNextNode(Node * nextNode);
    Node* getNextNode();
    Coefficient* getCoefficient();
    Exponent* getExponent();
    Node** getNextNodePointer();
    int compareTo(Node* anotherNode);
    std::string toString();
    Node* add(Node* anotherNode);
private:
    Exponent* exponent;
    Coefficient* coefficient;
    Node* nextNode;
    void init(Coefficient* coefficient, Exponent* exponent);
};

#endif	/* NODE_H */


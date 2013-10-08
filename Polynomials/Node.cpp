#include "Node.h"
#include <cstring>

Node::Node(Coefficient* coefficient, Exponent* exponent) {
    addressOfCoefficient = coefficient;
    addressOfExponent = exponent;
    addressOfNextNode = NULL;
}

Node::~Node() {
}

void Node::setAddressOfNextNode(Node* nextNode) {
    addressOfNextNode = nextNode;
}

Node* Node::getAddressOfNextNode() {
    return addressOfNextNode;
}

Coefficient* Node::getAddressOfCoefficient() {
    return addressOfCoefficient;
}

Exponent* Node::getAddressOfExponent() {
    return addressOfExponent;
}

Node** Node::getAddressOfNextNodePointer() {
    return &addressOfNextNode;
}

int Node::compareTo(Node* anotherNode) {
    Exponent* me = this->getAddressOfExponent();
    Exponent* him = anotherNode->getAddressOfExponent();
    int ime = me->toInt();
    int ihim = him->toInt();
    int difference = ime - ihim;
    
    if (difference < 0) 
        return -1;
    else if (difference > 0)
        return 1;
    else 
        return 0;          
}

std::string Node::toString() {
    std::string result;
    result.append(addressOfCoefficient->toString());
    result.append("x");
    result.append(addressOfExponent->toString());
    return result;
}

Node* Node::add(Node* anotherNode) {
    int result = this->getAddressOfCoefficient()->toInt() + anotherNode->getAddressOfCoefficient()->toInt();
    this->getAddressOfCoefficient()->setValue(result);
    return this;
}
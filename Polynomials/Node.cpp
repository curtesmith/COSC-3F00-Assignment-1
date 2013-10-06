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


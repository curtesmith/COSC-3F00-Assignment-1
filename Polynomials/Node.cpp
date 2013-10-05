#include "Node.h"
#include <cstring>

Node::Node(Coefficient* coefficient, Exponent* exponent) {
    this->coefficient = coefficient;
    this->exponent = exponent;
    this->nextNode = NULL;
}

Node::~Node() {
}

void Node::setNextNode(Node* nextNode) {
    this->nextNode = nextNode;
}

Node* Node::getNextNode() {
    return this->nextNode;
}

Coefficient* Node::getCoefficient() {
    return this->coefficient;
}

Exponent* Node::getExponent() {
    return this->exponent;
}

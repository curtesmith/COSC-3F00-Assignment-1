#include "Node.h"
#include <cstring>


Node::Node(Coefficient* coefficient, Exponent* exponent) {
    this->coefficient = coefficient;
    this->exponent = exponent;
    this->nextNode = NULL;
}


Node::~Node() { }


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


Node** Node::getNextNodePointer() {
    return &(this->nextNode);
}


int Node::compareTo(Node* anotherNode) {
    Exponent* exponent = this->getExponent();
    return exponent->compareTo(anotherNode->getExponent());
}


std::string Node::toString() {
    std::string result;
    result.append((*this).getCoefficient()->toString());
    result.append("x");
    result.append((*this).getExponent()->toString());
    return result;
}


Node* Node::add(Node* anotherNode) {
    int result = this->getCoefficient()->toInt() + anotherNode->getCoefficient()->toInt();
    this->getCoefficient()->setValue(result);
    return this;
}
#include "Polynomial.h"
#include "LinkedList.h"

Polynomial::Polynomial() {
    this->linkedList = new LinkedList();
}


Polynomial::~Polynomial() {
}

LinkedList* Polynomial::getLinkedList() {
    return this->linkedList;
}
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList() {
}


LinkedList::~LinkedList() {
}

Node* LinkedList::getRootNode() {
    return this->root;
}

void LinkedList::setRootNode(Node* rootNode) {
    this->root = rootNode;
}
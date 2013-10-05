#include "LinkedList.h"
#include "Node.h"
#include <cstring>

LinkedList::LinkedList() {
    this->root = NULL;
}


LinkedList::~LinkedList() {
}

Node* LinkedList::getRootNode() {
    return this->root;
}

void LinkedList::setRootNode(Node* rootNode) {
    this->root = rootNode;
}

void LinkedList::addNode(Node* node){
    Node* lastNode = getLastNode();
    lastNode->setNextNode(node);
}

Node* LinkedList::getLastNode() {
    Node* node = this->root;
    while(node->getNextNode() != NULL) {
        node = node->getNextNode();
    }
    return node;
}
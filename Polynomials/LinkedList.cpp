#include "LinkedList.h"
#include "Node.h"


LinkedList::LinkedList() {
    this->rootNode = NULL;
}


LinkedList::~LinkedList() { }


Node** LinkedList::getRootNodePointer() {
    return &rootNode;
}


void LinkedList::insertNode(Node** newNodePointer) {
    Node** nodePointer = getRootNodePointer();
    while (*nodePointer != NULL) {
        if ((*newNodePointer)->compareTo(*nodePointer) == 1) {
            break;
        } else if ((*newNodePointer)->compareTo(*nodePointer) == 0) {
            // add the coefficents of the nodes
            // update the coefficient of addressOfNode
            break;
        } else {
            nodePointer = this->getNextNodePointer(nodePointer);
        }
    }
    Node* tempNode = *nodePointer;
    *nodePointer = *newNodePointer;
    (*newNodePointer)->setNextNode(tempNode);
}


Node** LinkedList::getNextNodePointer(Node** node) {
    return (*node)->getNextNodePointer();
}


int LinkedList::size() {
    int size = 0;
    Node* node = this->rootNode;
    while (node != NULL) {
        size++;
        node = node->getNextNode();
    }
    return size;
}

std::list<Node> LinkedList::toList() {
    std::list<Node> newList;
    Node** node = this->getRootNodePointer();
    while(*node != NULL) {
        node = (*node)->getNextNodePointer();
    }
    return newList;
}
#include "LinkedList.h"
#include "Node.h"


LinkedList::LinkedList() {
    this->_begin = NULL;
}


LinkedList::~LinkedList() { }


Node** LinkedList::begin() {
    return &_begin;
}


void LinkedList::insertNode(Node** newNodePointer) {
    bool insertNode = true;
    Node** nodePointer = begin();
    while (*nodePointer != NULL) {
        if ((*newNodePointer)->compareTo(*nodePointer) == 1) {
            break;
        } else if ((*newNodePointer)->compareTo(*nodePointer) == 0) {
            Node* n = *nodePointer;
            n->add(*newNodePointer);
            insertNode = false;
            break;
        } else {
            nodePointer = this->getNextNodePointer(nodePointer);
        }
    }

    if (insertNode) {
        Node* tempNode = *nodePointer;
        *nodePointer = *newNodePointer;
        (*newNodePointer)->setNextNode(tempNode);
    }
}


Node** LinkedList::getNextNodePointer(Node** node) {
    return (*node)->getNextNodePointer();
}


int LinkedList::size() {
    int size = 0;
    Node* node = this->_begin;
    while (node != NULL) {
        size++;
        node = node->getNextNode();
    }
    return size;
}


std::list<Node> LinkedList::toList() {
    std::list<Node> newList;
    Node** node = this->begin();
    while (*node != NULL) {
        Node newNode(*node);
        newList.push_back(newNode);
        node = (*node)->getNextNodePointer();
    }
    return newList;
}


Node** LinkedList::getNode(int position) {    
    return this->begin();
}


bool LinkedList::end() {
    return true;
}


#include "NewLinkedList.h"


NewLinkedList::NewLinkedList() {
    _begin = new Node();
    _current = _begin;
}


NewLinkedList::~NewLinkedList() { }


void NewLinkedList::begin() {
    _current = _begin;
}


Node* NewLinkedList::getNode(int position) {
    int count = -1;
    begin();
    while (!end() && count < position) {
        next();
        count++;
    }
    return current();
}


Node* NewLinkedList::current() {
    return _current;
}


void NewLinkedList::insert(Node* node) {
    begin();        
    while (current()->getNextNode() != NULL) {
        if(node->compareTo(current()->getNextNode()) == 1) {
            node->setNextNode(current()->getNextNode()); 
        }
        next();
    }
    current()->setNextNode(node);     
}


void NewLinkedList::next() {
    if(!end()) {
        _current = _current->getNextNode();
    }
}


bool NewLinkedList::end() {
    return _current == NULL;
}
#include "LinkedList.h"


LinkedList::LinkedList() {
    _begin = new Node();
    _current = _begin;
}


LinkedList::~LinkedList() { }


void LinkedList::begin() {
    _current = _begin;
}


Node* LinkedList::getNode(int position) {
    int count = -1;
    begin();
    while (!end() && count < position) {
        next();
        count++;
    }
    return current();
}


Node* LinkedList::current() {
    return _current;
}


void LinkedList::insert(Node* node) {
    bool doInsert = true;
    begin();        
    while (current()->getNextNode() != NULL) {
        if(node->compareTo(current()->getNextNode()) == 1) {
            node->setNextNode(current()->getNextNode()); 
            break;
        } else if (node->compareTo(current()->getNextNode()) == 0) {
            current()->getNextNode()->add(node);
            doInsert = false;
            break;
        }
        next();
    }
    
    if(doInsert) {
        current()->setNextNode(node);     
    }
}


void LinkedList::next() {
    if(!end()) {
        _current = _current->getNextNode();
    }
}


bool LinkedList::end() {
    return _current == NULL;
}


std::list<Node> LinkedList::toList() {
    std::list<Node> nodeList;
    begin();
    next();
    while (!end()) {
        Node node(current());
        nodeList.push_back(node);
        next();
    }
    return nodeList;
}


int LinkedList::size() {
    int count = 0;
    begin();
    next();
    while(!end()) {
        count++;
        next();
    }
    return count;
}
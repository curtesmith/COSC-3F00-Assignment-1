#ifndef NEWLINKEDLIST_H
#define	NEWLINKEDLIST_H

#include "Node.h"
#include <list>

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    void begin();
    Node* getNode(int position);
    Node* current();
    void insert(Node* node);
    void next();
    bool end();
    std::list<Node> toList();
    int size();
private:
    Node* _begin;
    Node* _current;
};

#endif	/* NEWLINKEDLIST_H */


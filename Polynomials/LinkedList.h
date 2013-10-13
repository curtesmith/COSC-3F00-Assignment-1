#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"
#include <list>

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node** begin();
    void insertNode(Node** newNode);
    int size();
    Node** getNextNodePointer(Node** node);
    std::list<Node> toList();
    Node** getNode(int position);
    bool end();
private:
    Node* _begin;
};

#endif	/* LINKEDLIST_H */


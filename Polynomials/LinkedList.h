#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node** getRootNodePointer();
    void insertNode(Node** newNode);
    int size();
    Node** getNextNodePointer(Node** node);
private:
    Node* rootNode;
};

#endif	/* LINKEDLIST_H */


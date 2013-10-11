#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"
#include <list>

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node** getRootNodePointer();
    void insertNode(Node** newNode);
    int size();
    Node** getNextNodePointer(Node** node);
    std::list<Node> toList();
private:
    Node* rootNode;
};

#endif	/* LINKEDLIST_H */


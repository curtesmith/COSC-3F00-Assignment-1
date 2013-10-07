#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node** getAddressOfRootNodePointer();
    void setRootNode(Node* rootNode);
    void addNode(Node** node);
    void insertNode(Node** newNode);
    int size();
    Node** getAddressOfLastNodePointer();
    Node** getAddressOfNextNodePointer(Node** node);
private:
    Node* addressOfRootNode;
};

#endif	/* LINKEDLIST_H */


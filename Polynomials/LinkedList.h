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
    int size();
    Node** getAddressOfLastNodePointer();    
private:
    Node* addressOfRootNode;
};

#endif	/* LINKEDLIST_H */


#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node* getRootNode();
    void setRootNode(Node* rootNode);
private:
    Node* root;
};

#endif	/* LINKEDLIST_H */


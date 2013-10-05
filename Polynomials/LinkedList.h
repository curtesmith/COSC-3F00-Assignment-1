#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    Node* getRootNode();
    void setRootNode(Node* rootNode);
    void addNode(Node* node);
private:
    Node* root;
    Node* current;
    Node* getLastNode();
};

#endif	/* LINKEDLIST_H */


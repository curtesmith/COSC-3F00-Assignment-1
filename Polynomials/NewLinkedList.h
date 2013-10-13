#ifndef NEWLINKEDLIST_H
#define	NEWLINKEDLIST_H

#include "Node.h"

class NewLinkedList {
public:
    NewLinkedList();
    virtual ~NewLinkedList();
    void begin();
    Node* getNode(int position);
    Node* current();
    void insert(Node* node);
    void next();
    bool end();
private:
    Node* _begin;
    Node* _current;
};

#endif	/* NEWLINKEDLIST_H */


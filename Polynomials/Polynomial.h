#ifndef POLYNOMIAL_H
#define	POLYNOMIAL_H

#include "LinkedList.h"

class Polynomial {
public:
    Polynomial();
    virtual ~Polynomial();
    LinkedList* getLinkedList();
private:
    LinkedList* linkedList;
};

#endif	/* POLYNOMIAL_H */


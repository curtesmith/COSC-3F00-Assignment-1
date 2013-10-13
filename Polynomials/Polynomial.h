#ifndef POLYNOMIAL_H
#define	POLYNOMIAL_H

#include "LinkedList.h"
#include <string>


class Polynomial {
public:
    Polynomial();
    virtual ~Polynomial();
    LinkedList* getLinkedList();
    void fill(std::string s);
    std::string toString();
    void merge(Polynomial* p);
private:
    LinkedList* linkedList;
};

#endif	/* POLYNOMIAL_H */


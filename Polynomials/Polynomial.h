#ifndef POLYNOMIAL_H
#define	POLYNOMIAL_H

#include "LinkedList.h"
#include <string>


class Polynomial {
public:
    Polynomial();
    virtual ~Polynomial();
    LinkedList* getAddressOfLinkedList();
    void fill(std::string s);
    std::string toString();
    void merge(Polynomial* p);
private:
    LinkedList* addressOfLinkedList;
};

#endif	/* POLYNOMIAL_H */


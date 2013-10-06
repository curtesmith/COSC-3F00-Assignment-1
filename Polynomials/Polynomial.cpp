#include "Polynomial.h"
#include "LinkedList.h"
#include "StringHelper.h"

Polynomial::Polynomial() {
    this->addressOfLinkedList = new LinkedList();
}

Polynomial::~Polynomial() {
}

LinkedList* Polynomial::getAddressOfLinkedList() {
    return this->addressOfLinkedList;
}

void Polynomial::fill(std::string s) {
    std::string delimiter = " ";
    Coefficient* coefficient;
    Exponent* exponent;
    int parts = 0;
    bool createCoefficient = true;
    const int MAX_PARTS = 2;

    std::list<std::string> tokens = StringHelper::getListOfTokens(s, delimiter);
    for(std::list<std::string>::iterator i = tokens.begin(); i != tokens.end(); i++) {
        if(createCoefficient) {
            coefficient = new Coefficient(*i);
            createCoefficient = false;
            parts++;
        } else {
            exponent = new Exponent(*i);
            createCoefficient = true;
            parts++;
        }
        
        if (parts == MAX_PARTS) {
            Node* addressOfNode = new Node(coefficient, exponent);
            this->getAddressOfLinkedList()->addNode(&addressOfNode);
            parts = 0;
        }        
    }  
    
}

std::string Polynomial::toString() {
    Node** addressOfRootNodePointer = this->getAddressOfLinkedList()->getAddressOfRootNodePointer();
    Node* node = *addressOfRootNodePointer;
    std::string polynomial = "";
    while(node != NULL) {        
        polynomial.append(node->getAddressOfCoefficient()->toString());
        polynomial.append("x");
        polynomial.append(node->getAddressOfExponent()->toString());
        polynomial.append(" ");
        node = node->getAddressOfNextNode();
    }    
    return polynomial;
}
#include "Polynomial.h"
#include "LinkedList.h"
#include "StringHelper.h"


Polynomial::Polynomial() {
    this->linkedList = new LinkedList();
}


Polynomial::~Polynomial() { }


LinkedList* Polynomial::getLinkedList() {
    return this->linkedList;
}


void Polynomial::fill(std::string s) {
    std::string delimiter = " ";
    Coefficient* coefficient;
    Exponent* exponent;
    int parts = 0;
    bool createCoefficient = true;
    const int MAX_PARTS = 2;

    std::list<std::string> tokens = StringHelper::getListOfTokens(s, delimiter);
    for (std::list<std::string>::iterator i = tokens.begin(); i != tokens.end(); i++) {
        if (createCoefficient) {
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
            getLinkedList()->insertNode(&addressOfNode);
            parts = 0;
        }
    }

}


std::string Polynomial::toString() {
    Node** addressOfRootNodePointer = getLinkedList()->begin();
    Node* node = *addressOfRootNodePointer;
    std::string polynomial = "";
    while (node != NULL) {
        polynomial.append(node->toString());
        node = node->getNextNode();
        if (node != NULL)
            polynomial.append(" ");
    }
    return polynomial;
}

void Polynomial::merge(Polynomial* p) {
    std::list<Node>nodes = p->getLinkedList()->toList();
    for(std::list<Node>::iterator i = nodes.begin(); i != nodes.end(); i++) {
        Node node = *i;
        Node* nodePointer = &node;
        Node** pointerToNodePointer = &nodePointer;
        this->getLinkedList()->insertNode(pointerToNodePointer);
    }
}
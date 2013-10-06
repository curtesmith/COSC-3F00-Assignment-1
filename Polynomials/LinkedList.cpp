#include "LinkedList.h"
#include "Node.h"
#include <cstring>

LinkedList::LinkedList() {
    addressOfRootNode = NULL;
}

LinkedList::~LinkedList() {
}

Node** LinkedList::getAddressOfRootNodePointer() {
    return &addressOfRootNode;
}

void LinkedList::setRootNode(Node* rootNode) {
    addressOfRootNode = rootNode;
}

void LinkedList::addNode(Node** addressOfNewNodePointer) {
    Node** addressOfLastNodePointer = getAddressOfLastNodePointer();
    *addressOfLastNodePointer = *addressOfNewNodePointer;
}

Node** LinkedList::getAddressOfLastNodePointer() {
    Node** addressOfNodePointer = getAddressOfRootNodePointer();

    while (*addressOfNodePointer != NULL) {
        addressOfNodePointer = (*addressOfNodePointer)->getAddressOfNextNodePointer();
    }    

    return addressOfNodePointer;
}

int LinkedList::size() {
    int size = 0;
    Node* node = addressOfRootNode;
    while (node != NULL) {
        size++;
        node = (*node).getAddressOfNextNode();
    }
    return size;
}
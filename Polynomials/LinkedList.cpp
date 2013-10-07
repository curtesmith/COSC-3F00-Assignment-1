#include "LinkedList.h"
#include "Node.h"

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
    
    /* set current node to address of root node
     * if current node is not null
     *    if new node is less than current node
     *       get next node in link list
     *    else 
     *       insert the node 
     */
}

void LinkedList::insertNode(Node** addressOfNewNodePointer) {
    Node** addressOfNodePointer = getAddressOfRootNodePointer();
    while(*addressOfNodePointer != NULL) {      
        if((*addressOfNewNodePointer)->compareTo(*addressOfNodePointer) == 1) {
            break;
        } else if ((*addressOfNewNodePointer)->compareTo(*addressOfNodePointer) == 0) {
            // add the coefficents of the nodes
            // update the coefficient of addressOfNode
            break;
        } else {
            addressOfNodePointer = this->getAddressOfNextNodePointer(addressOfNodePointer);
        }
    }
    Node* tmp = *addressOfNodePointer;
    *addressOfNodePointer = *addressOfNewNodePointer;
    (*addressOfNewNodePointer)->setAddressOfNextNode(tmp);    
}

Node** LinkedList::getAddressOfLastNodePointer() {
    Node** addressOfNodePointer = getAddressOfRootNodePointer();

    while (*addressOfNodePointer != NULL) {
        addressOfNodePointer = (*addressOfNodePointer)->getAddressOfNextNodePointer();
    }    

    return addressOfNodePointer;
}

Node** LinkedList::getAddressOfNextNodePointer(Node** node) {
    return (*node)->getAddressOfNextNodePointer();
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
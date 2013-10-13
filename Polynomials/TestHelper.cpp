#include <stdlib.h>

#include "TestHelper.h"
#include "StringHelper.h"
#include "Node.h"
#include <ctime>


TestHelper::TestHelper() { }


TestHelper::~TestHelper() { }

Node* TestHelper::createNode(std::string coefficient, std::string exponent) {
    return new Node(new Coefficient(coefficient), new Exponent(exponent));
}

Node* TestHelper::createRandomNode() {
    srand(time(NULL));
    int exponent = rand() %6;
    int coefficient = rand() %6;
    return new Node(new Coefficient(StringHelper::convertIntToString(coefficient)),
            new Exponent(StringHelper::convertIntToString(exponent)));
}
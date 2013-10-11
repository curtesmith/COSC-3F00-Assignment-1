#include "Exponent.h"
#include "StringHelper.h"
#include <string>


Exponent::Exponent() {
    init("0");
}


Exponent::Exponent(std::string value) {
    init(value);
}


Exponent::Exponent(Exponent* clone) {
    init(clone->toString());
 }


Exponent::~Exponent() { }


void Exponent::init(std::string value) {
    this->value = value;
}


int Exponent::toInt() {
    return StringHelper::convertStringToInt(this->value);
}


std::string Exponent::toString() {
    return this->value;
}


int Exponent::compareTo(Exponent* anotherExponent) {
    if (this->toInt() < anotherExponent->toInt()) {
        return -1;
    } else if (this->toInt() == anotherExponent->toInt()) {
        return 0;
    } else {
        return 1;
    }
}

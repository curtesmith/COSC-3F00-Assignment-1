#include "Coefficient.h"
#include "StringHelper.h"


Coefficient::Coefficient() {
    init("0");
}


Coefficient::~Coefficient() { }


Coefficient::Coefficient(std::string value) {
    init(value);
}

Coefficient::Coefficient(Coefficient* clone) {
    init(clone->toString());
}

void Coefficient::init(std::string value) {
    this->value = value;
}


int Coefficient::toInt() {
    return StringHelper::convertStringToInt(this->value);
}


std::string Coefficient::toString() {
    return this->value;
}


void Coefficient::setValue(int value) {
    this->value = StringHelper::convertIntToString(value);
}
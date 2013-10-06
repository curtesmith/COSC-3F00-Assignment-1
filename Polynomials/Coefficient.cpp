#include "Coefficient.h"
#include "StringHelper.h"

Coefficient::Coefficient() {
    init("0");
}

Coefficient::~Coefficient() {
}


Coefficient::Coefficient(std::string value) {
    init(value);
}

void Coefficient::init(std::string value) {
    this->value = value;
}

int Coefficient::toInt() {
    return StringHelper::convertStringToInt(value);
}

std::string Coefficient::toString() {
    return value;
}
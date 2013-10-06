#include "Exponent.h"
#include "StringHelper.h"

Exponent::Exponent() {
    init("0");
}

Exponent::Exponent(std::string value) {
    init(value);
}

Exponent::~Exponent() {
}

void Exponent::init(std::string value) {
    this->value = value;
}

int Exponent::toInt() {
    return StringHelper::convertStringToInt(value);
}

std::string Exponent::toString() {
    return value;
}
#include "Exponent.h"

Exponent::Exponent() {
    init(0);
}

Exponent::Exponent(int value) {
    init(value);
}

Exponent::~Exponent() {
}

void Exponent::init(int value) {
    this->value = value;
}

int Exponent::toInt() {
    return this->value;
}
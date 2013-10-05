#include "Coefficient.h"

Coefficient::Coefficient() {
    init(0);
}

Coefficient::~Coefficient() {
}

Coefficient::Coefficient(int value) {
    init(value);
}

void Coefficient::init(int value) {
    this->value = value;
}

int Coefficient::toInt() {
    return this->value;
}
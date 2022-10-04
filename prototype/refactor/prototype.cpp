#include <iostream>
#include "prototype.h"

PrototypeA::PrototypeA(): _state("initial state") {}

PrototypeA::PrototypeA(const PrototypeA& rhs): _state(rhs._state) { }

Prototype* PrototypeA::clone() {
    return new PrototypeA(*this);
}

void PrototypeA::print() {
    std::cout << _state << std::endl;
}
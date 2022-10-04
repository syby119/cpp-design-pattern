#include <iostream>
#include "prototype.h"

PrototypeA::PrototypeA(): _state("initial state") {}

PrototypeA::PrototypeA(const PrototypeA& rhs): _state(rhs._state) { }

void PrototypeA::print() {
    std::cout << _state << std::endl;
}

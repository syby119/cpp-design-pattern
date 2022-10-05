#include <iostream>
#include "implementor.h"
#include "abstraction.h"

Abstraction::Abstraction(Implementor* implementor)
    : _implementor(implementor) { }

void Abstraction::operation() {
    _implementor->operationImp();
}

ConcreteA::ConcreteA(Implementor* implementor)
    : Abstraction(implementor) { }

void ConcreteA::service() {
    std::cout << "serviceA" << std::endl;
    operation();
}

ConcreteB::ConcreteB(Implementor* implementor)
    : Abstraction(implementor) { }

void ConcreteB::service() {
    std::cout << "serviceB" << std::endl;
    operation();
}
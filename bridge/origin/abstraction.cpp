#include <iostream>
#include "abstraction.h"

void ConcreteA::service() {
    std::cout << "serviceA" << std::endl;
    operation();
}

void ConcreteB::service() {
    std::cout << "serviceB" << std::endl;
    operation();
}

void ConcreteA1::operation() {
    std::cout << "operation1" << std::endl;
}

void ConcreteA2::operation() {
    std::cout << "operation2" << std::endl;
}

void ConcreteB1::operation() {
    std::cout << "operation1" << std::endl;
}

void ConcreteB2::operation() {
    std::cout << "operation2" << std::endl;
}
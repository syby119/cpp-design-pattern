#include <iostream>
#include "component.h"

void ComponentA::execute() {
    std::cout << "ComponentA::execute()" << std::endl;
}

void ComponentB::execute() {
    std::cout << "ComponentB::execute()" << std::endl;
}
#include <iostream>
#include "implementor.h"

void Implementor1::operationImp() {
    std::cout << "operation1" << std::endl;
}

void Implementor2::operationImp() {
    std::cout << "operation2" << std::endl;
}
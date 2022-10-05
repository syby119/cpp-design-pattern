#include <iostream>
#include "adaptee.h"

void Adaptee::bar() {
    std::cout << "Adaptee::bar()" << std::endl;
}

void Adaptee::foo() {
    std::cout << "Adaptee::foo()" << std::endl;
}
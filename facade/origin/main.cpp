#include <iostream>
#include "subsystem.h"

Subsystem1 system1;
Subsystem2 system2;
Subsystem3 system3;

void callA() {
    std::cout << "callA()" << std::endl;
    system1.f1();
    system2.f2();
}

void callB() {
    std::cout << "callB()" << std::endl;
    system1.f1();
    system3.f3();
}

int main() {
    callA();
    callB();

    return 0;
}
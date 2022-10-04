#include <iostream>
#include "facade.h"

Facade::Facade() {
    _system1.reset(new Subsystem1);
    _system2.reset(new Subsystem2);
    _system3.reset(new Subsystem3);
}

void Facade::callA() {
    std::cout << "Facade::callA()" << std::endl;
    _system1->f1();
    _system2->f2();
}

void Facade::callB() {
    std::cout << "Facade::callB()" << std::endl;
    _system1->f1();
    _system3->f3();
}
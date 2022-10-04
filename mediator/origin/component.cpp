#include <iostream>
#include "component.h"

void ComponentA::operationA() {
    std::cout << "ComponentA::operationA()" << std::endl;
}

void ComponentA::reactA() {
    std::cout << "ComponentA::reactA()" << std::endl;
}

void ComponentA::notify(ComponentB* b) {
    b->reactB();
}

void ComponentB::operationB() {
    std::cout << "ComponentB::operationB()" << std::endl;
}

void ComponentB::reactB() {
    std::cout << "ComponentB::reactB()" << std::endl;
}

void ComponentB::notify(ComponentC* c) {
    c->reactC();
}

void ComponentC::operationC() {
    std::cout << "ComponentC::operationC()" << std::endl;
}

void ComponentC::reactC() {
    std::cout << "ComponentC::reactC()" << std::endl;
}

void ComponentC::notify(ComponentA* a) {
    a->reactA();
}

void ComponentC::notify(ComponentB* b) {
    b->reactB();
}

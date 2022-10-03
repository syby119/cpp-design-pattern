#include <iostream>
#include "component.h"

void ComponentA::execute() {
    std::cout << "ComponentA::execute()" << std::endl;
}

void ComponentB::execute() {
    std::cout << "ComponentB::execute()" << std::endl;
}

void ComponentAC::execute() {
    funC();
    ComponentA::execute();
}

void ComponentAC::funC() {
    std::cout << "ComponentAC::funC()" << std::endl;
}

void ComponentAD::execute() {
    funD();
    ComponentA::execute();
}

void ComponentAD::funD() {
    std::cout << "ComponentAD::funD()" << std::endl;
}

void ComponentBC::execute() {
    funC();
    ComponentB::execute();
}

void ComponentBC::funC() {
    std::cout << "ComponentBC::funC()" << std::endl;
}

void ComponentBD::execute() {
    funD();
    ComponentB::execute();
}

void ComponentBD::funD() {
    std::cout << "ComponentBD::funD()" << std::endl;
}
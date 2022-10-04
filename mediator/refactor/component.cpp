#include <iostream>
#include "mediator.h"
#include "component.h"

ComponentA::ComponentA(Mediator* mediator): _mediator(mediator) { }

void ComponentA::operationA() {
    std::cout << "ComponentA::operationA()" << std::endl;
    _mediator->notify(this);
}

void ComponentA::reactA() {
    std::cout << "ComponentA::reactA()" << std::endl;
}

ComponentB::ComponentB(Mediator* mediator): _mediator(mediator) { }

void ComponentB::operationB() {
    std::cout << "ComponentB::operationB()" << std::endl;
    _mediator->notify(this);
}

void ComponentB::reactB() {
    std::cout << "ComponentB::reactB()" << std::endl;
}

ComponentC::ComponentC(Mediator* mediator): _mediator(mediator) { }


void ComponentC::operationC() {
    std::cout << "ComponentC::operationC()" << std::endl;
    _mediator->notify(this);
}

void ComponentC::reactC() {
    std::cout << "ComponentC::reactC()" << std::endl;
}
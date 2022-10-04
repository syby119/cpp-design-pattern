#include "component.h"
#include "mediator.h"

void Mediator1::addComponentA(ComponentA* a) {
    _componentAs.push_back(a);
}

void Mediator1::addComponentB(ComponentB* b) {
    _componentBs.push_back(b);
}

void Mediator1::addComponentC(ComponentC* c) {
    _componentCs.push_back(c);
}


void Mediator1::notify(ComponentA* sender) {
    for (auto b : _componentBs) {
        b->reactB();
    }
}

void Mediator1::notify(ComponentB* sender) {
    for (auto c : _componentCs) {
        c->reactC();
    }
}

void Mediator1::notify(ComponentC* sender) {
    for (auto a : _componentAs) {
        a->reactA();
    }

    for (auto b : _componentBs) {
        b->reactB();
    }
}
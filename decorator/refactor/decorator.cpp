#include <iostream>
#include "decorator.h"

Decorator::Decorator(Component* component): _component(component) { }

DecoratorC::DecoratorC(Component* component): Decorator(component) { }

void DecoratorC::execute() {
    funC();
    _component->execute();
}

void DecoratorC::funC() {
    std::cout << "DecoratorC::funC()" << std::endl;
}

DecoratorD::DecoratorD(Component* component): Decorator(component) { }

void DecoratorD::execute() {
    funD();
    _component->execute();
}

void DecoratorD::funD() {
    std::cout << "DecoratorD::funD()" << std::endl;
}
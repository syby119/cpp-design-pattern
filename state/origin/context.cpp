#include <iostream>
#include "context.h"

Context::Context(): _state(State::A) {}

void Context::operationInterface() {
    switch (_state) {
        case State::A:
            operationInterfaceA();
            break;
        case State::B: 
            operationInterfaceB();
            break;
        case State::C:
            operationInterfaceC();
            break;
    }
}

void Context::operationInterfaceA() {
    std::cout << "Context::operationInterfaceA()" << std::endl;
     _state = State::B; 
}

void Context::operationInterfaceB() {
    std::cout << "Context::operationInterfaceB()" << std::endl;
     _state = State::C; 
}

void Context::operationInterfaceC() {
    std::cout << "Context::operationInterfaceC()" << std::endl;
     _state = State::A; 
}
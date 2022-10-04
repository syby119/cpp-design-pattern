#include <iostream>

#include "context.h"
#include "state.h"

void State::changeState(Context* context, State* state) {
    context->changeState(state);
}

void StateA::operationInterface(Context* context) {
    std::cout << "StateA::operationInterface(Context* context)" << std::endl;
    State::changeState(context, new StateB());
}

void StateB::operationInterface(Context* context) {
    std::cout << "StateB::operationInterface(Context* context)" << std::endl;
    State::changeState(context, new StateC());
}

void StateC::operationInterface(Context* context) {
    std::cout << "StateC::operationInterface(Context* context)" << std::endl;
    State::changeState(context, new StateA());
}
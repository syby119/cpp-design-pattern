#include "state.h"
#include "context.h"

Context::Context() {
    _state.reset(new StateA);
}

void Context::operationInterface() {
    _state->operationInterface(this);
}

void Context::changeState(State* state) {
    _state.reset(state);
}
#pragma once
#include <memory>
#include "state.h"

class Context {
public:
    Context();

    void operationInterface();

private:
    std::unique_ptr<State> _state;

    void changeState(State* state);

    friend class State;
};
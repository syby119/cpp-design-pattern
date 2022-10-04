#pragma once

class Context;

class State {
public:
    virtual ~State() = default;

    virtual void operationInterface(Context* context) = 0;
protected:
    void changeState(Context* context, State* state);
};


class StateA: public State {
public:
    // A->B, B->C, C->A
    void operationInterface(Context* context) override;
};

class StateB: public State {
public:
    // A->B, B->C, C->A
    void operationInterface(Context* context) override;
};

class StateC: public State {
public:
    // A->B, B->C, C->A
    void operationInterface(Context* context) override;
};
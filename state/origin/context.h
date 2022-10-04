#pragma once

enum class State {
    A, B, C
};

class Context {
public:
    Context();

    void operationInterface();
private:
    State _state;

    void operationInterfaceA();

    void operationInterfaceB();
    
    void operationInterfaceC();
};
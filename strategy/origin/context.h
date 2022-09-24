#pragma once
#include "strategy.h"

class Context {
public:
    Context() = default;
    
    ~Context() = default;

    void setStrategy(Strategy strategy);

    void executeStrategy();

private:
    Strategy _strategy;
};
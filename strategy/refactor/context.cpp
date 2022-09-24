#include "context.h"

void Context::setStrategy(Strategy* strategy) {
    _strategy = strategy;
}

void Context::executeStrategy() {
    if (_strategy) {
        _strategy->execute();
    }
}
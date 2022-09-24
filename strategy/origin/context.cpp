#include <iostream>
#include "context.h"

void Context::setStrategy(Strategy strategy) {
    _strategy = strategy;
}

void Context::executeStrategy() {
    if (_strategy == Strategy::A) {
        std::cout << "Strategy A" << std::endl; 
    } else if(_strategy == Strategy::B) {
        std::cout << "Strategy B" << std::endl; 
    } else if (_strategy == Strategy::C) {
        std::cout << "Strategy C" << std::endl; 
    }
}
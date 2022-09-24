#include <iostream>
#include "strategy.h"

void StrategyA::execute() {
    std::cout << "Strategy A" << std::endl;
}

void StrategyB::execute() {
    std::cout << "Strategy B" << std::endl;
}

void StrategyC::execute() {
    std::cout << "Strategy C" << std::endl;
}
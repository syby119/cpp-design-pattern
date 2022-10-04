#include <iostream>
#include "invoker.h"

void Invoker::executeCommandA() {
    std::cout << "Invoker::executeCommandA()" << std::endl;
}

void Invoker::executeCommandB(const std::string& args) {
    std::cout << "Invoker::executeCommandB() " << args << std::endl;
}
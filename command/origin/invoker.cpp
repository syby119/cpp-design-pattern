#include <iostream>
#include "invoker.h"

void Invoker1::executeCommandA() {
    std::cout << "Invoker1::executeCommandA()" << std::endl;
}

void Invoker1::executeCommandB(const std::string& args) {
    std::cout << "Invoker1::executeCommandB() " << args << std::endl;
}

void Invoker2::executeCommandA() {
    std::cout << "Invoker2::executeCommandA()" << std::endl;
}

void Invoker2::executeCommandB(const std::string& args) {
    std::cout << "Invoker2::executeCommandB() " << args << std::endl;
}
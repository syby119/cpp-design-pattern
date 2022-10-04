#include <iostream>
#include "handler.h"

bool HandlerA::canHandle(const std::string& request) {
    std::cout << "HandlerA received request: " << request << std::endl;
    return false;
}

void HandlerA::handle(const std::string& request) {
    std::cout << "HandlerA handled request: " << request << std::endl;
}

bool HandlerB::canHandle(const std::string& request) {
    std::cout << "HandlerB received request: " << request << std::endl;
    return true;
}

void HandlerB::handle(const std::string& request) {
    std::cout << "HandlerB handled request: " << request << std::endl;
}
#include <iostream>
#include "handler.h"

Handler::Handler(): _next(nullptr) { }

Handler* Handler::getNext() const {
    return _next;
}

void Handler::setNext(Handler* handler) {
    _next = handler;
}

bool HandlerA::canHandle(const std::string& request) {
    return false;
}

void HandlerA::handle(const std::string& request) {
    std::cout << "HandlerA received request: " << request << std::endl;
    if (canHandle(request)) {
        std::cout << "Request handled" << std::endl;
    } else if (_next) {
        std::cout << "Cannot handle request, pass to the next handler" << std::endl;
        _next->handle(request);
    } else {
        std::cout << "Request unhandled" << std::endl;
    }
}

bool HandlerB::canHandle(const std::string& request) {
    return true;
}

void HandlerB::handle(const std::string& request) {
    std::cout << "HandlerB received request: " << request << std::endl;
    if (canHandle(request)) {
        std::cout << "Request handled" << std::endl;
    } else if (_next) {
        std::cout << "Cannot handle request, pass to the next handler" << std::endl;
        _next->handle(request);
    } else {
        std::cout << "Request unhandled" << std::endl;
    }
}
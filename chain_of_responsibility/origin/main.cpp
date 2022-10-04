#include <iostream>
#include <list>
#include <memory>

#include "handler.h"

int main() {
    std::list<std::unique_ptr<Handler>> handlerChain;
    for (int i = 0; i < 10; ++i) {
        std::unique_ptr<Handler> handler;
        if (i % 4 == 3) {
            handler.reset(new HandlerB);
        } else {
            handler.reset(new HandlerA);
        }

        handlerChain.push_back(std::move(handler));
    }

    const std::string request = "Request";
    for (auto iter = handlerChain.begin(); iter != handlerChain.end();) {
        if ((*iter)->canHandle(request)) {
            (*iter)->handle(request);
            break;
        } else if (++iter != handlerChain.end()){
            std::cout << "Cannot handle request, pass to the next handler" << std::endl;
            continue;
        } else {
            std::cout << "request unhandled" << std::endl;
        }
    }

    return 0;
}
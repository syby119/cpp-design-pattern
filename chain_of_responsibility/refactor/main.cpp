#include <vector>
#include <memory>
#include "handler.h"

int main() {
    std::vector<std::unique_ptr<Handler>> handlers;
    for (int i = 0; i < 10; ++i) {
        std::unique_ptr<Handler> handler;
        if (i % 4 == 3) {
            handler.reset(new HandlerB);
        } else {
            handler.reset(new HandlerA);
        }

        if (!handlers.empty()) {
            handlers.back()->setNext(handler.get());
        }

        handlers.push_back(std::move(handler));
    }

    handlers[0]->handle("Request");

    return 0;
}
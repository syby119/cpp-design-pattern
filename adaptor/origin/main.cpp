#include <memory>
#include "adaptee.h"

void process() {
    auto adaptee = std::make_unique<Adaptee>();
    adaptee->bar();
    adaptee->foo();
}

int main() {
    process();

    return 0;
}
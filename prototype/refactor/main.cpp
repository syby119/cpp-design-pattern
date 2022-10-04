#include <memory>
#include "prototype.h"

int main() {
    auto a = std::make_unique<PrototypeA>();
    std::unique_ptr<Prototype> b { a->clone() }; 

    b->print();

    return 0;
}
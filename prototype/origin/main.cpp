#include <memory>
#include "prototype.h"

int main() {
    auto a = std::make_unique<PrototypeA>();
    PrototypeA b = *a;

    b.print();

    return 0;
}
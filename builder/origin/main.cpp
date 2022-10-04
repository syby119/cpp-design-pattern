#include <memory>
#include "product.h"

int main() {
    std::unique_ptr<Product> a = std::make_unique<ProductA>();
    a->setA("_a set from ProductA::setA()");
    a->setB("_b set from ProductA::setB()");
    a->setC("_c set from ProductA::setC()");
    a->setD("_d set from ProductA::setD()");
    a->print();

    std::unique_ptr<Product> b = std::make_unique<ProductB>();
    b->setA("_a set from ProductB::setA()");
    b->setB("_b set from ProductB::setB()");
    b->setC("_c set from ProductB::setC()");
    b->setD("_d set from ProductB::setD()");
    b->print();

    return 0;
}
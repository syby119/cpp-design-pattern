#include "product.h"
#include "factory.h"

Product* FactoryA::createProduct() {
    return new ProductA;
}

Product* FactoryB::createProduct() {
    return new ProductB;
}
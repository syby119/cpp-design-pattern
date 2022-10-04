#include "abstract_factory.h"

Product1* ConcreteFactory1::createProduct1() {
    return new Product1A;
}

Product2* ConcreteFactory1::createProduct2() {
    return new Product2C;
}

Product1* ConcreteFactory2::createProduct1() {
    return new Product1B;
}

Product2* ConcreteFactory2::createProduct2() {
    return new Product2D;
}
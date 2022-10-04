#pragma once
#include "product.h"

class AbstractFactory {
public:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;

    virtual Product1* createProduct1() = 0;
    virtual Product2* createProduct2() = 0;
};

class ConcreteFactory1: public AbstractFactory {
public:
    ConcreteFactory1() = default;
    ~ConcreteFactory1() = default;

    Product1* createProduct1() override;
    Product2* createProduct2() override;
};

class ConcreteFactory2: public AbstractFactory {
public:
    ConcreteFactory2() = default;
    ~ConcreteFactory2() = default;

    Product1* createProduct1() override;
    Product2* createProduct2() override;
};
#pragma once

class Product;

class Factory {
public:
    Factory() = default;
    virtual ~Factory() = default;
    virtual Product* createProduct() = 0;
};

class FactoryA: public Factory {
public:
    FactoryA() = default;
    ~FactoryA() = default;

    Product* createProduct() override;
};

class FactoryB: public Factory {
public:
    FactoryB() = default;
    ~FactoryB() = default;

    Product* createProduct() override;
};

#pragma once

class Product {
public:
    Product() = default;
    virtual ~Product() = default;
};

class ProductA: public Product {
public:
    ProductA();
    ~ProductA() = default;
};

class ProductB: public Product {
public:
    ProductB();
    ~ProductB() = default;
};
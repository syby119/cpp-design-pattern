#pragma once

class Product1 {
public:
    virtual ~Product1() = default;
};

class Product1A: public Product1 {
public:
    Product1A();
};

class Product1B: public Product1 {
public:
    Product1B();
};

class Product2 {
public:
    virtual ~Product2() = default;
};

class Product2C: public Product2 {
public:
    Product2C();
};

class Product2D: public Product2 {
public:
    Product2D();
};
#pragma once
#include <string>

class Product {
public:
    virtual ~Product() = default;
    void setA(const std::string& a);
    void setB(const std::string& a);
    void setC(const std::string& a);
    void setD(const std::string& a);

    void print();
public:
    std::string _a;
    std::string _b;
    std::string _c;
    std::string _d;
};

class ProductA: public Product {

};

class ProductB: public Product {

};
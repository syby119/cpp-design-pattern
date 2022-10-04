#include <iostream>
#include "product.h"

void Product::setA(const std::string& a) {
    _a = a;
}

void Product::setB(const std::string& b) {
    _b = b;
}

void Product::setC(const std::string& c) {
    _c = c;
}

void Product::setD(const std::string& d) {
    _d = d;
}

void Product::print() {
    std::cout << "_a: " << _a << std::endl;
    std::cout << "_b: " << _b << std::endl;
    std::cout << "_c: " << _c << std::endl;
    std::cout << "_d: " << _d << std::endl;
}
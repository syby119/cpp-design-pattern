#include <iostream>
#include "visitor.h"

void Visitor1::visit(ElementA& a) const {
    std::cout << "Visitor1::visit(ElementA& a)" << std::endl;
}

void Visitor1::visit(ElementB& b) const {
    std::cout << "Visitor1::visit(ElementB& b)" << std::endl;
}

void Visitor2::visit(ElementA& a) const {
    std::cout << "Visitor2::visit(ElementA& a)" << std::endl;
}

void Visitor2::visit(ElementB& b) const {
    std::cout << "Visitor2::visit(ElementB& b)" << std::endl;
}
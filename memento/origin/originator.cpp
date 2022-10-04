#include <iostream>
#include "originator.h"

int Originator::getI() const {
    return _i;
}

void Originator::setI(int i) {
    _i = i;
}

std::string Originator::getStr() const {
    return _str;    
}

void Originator::setStr(const std::string& str) {
    _str = str;    
}

void Originator::printState() const {
    std::cout << "_i: " << _i << std::endl;
    std::cout << "_str: " << _str << std::endl;
}
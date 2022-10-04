#include <iostream>
#include "originator.h"

void Originator::setI(int i) {
    _i = i;
}

void Originator::setStr(const std::string& str) {
    _str = str;    
}

Mememto Originator::createMememto() {
    return Mememto(_i, _str);
}

void Originator::setMememto(const Mememto& memoto) {
    _i = memoto.getI();
    _str = memoto.getStr();
}

void Originator::printState() const {
    std::cout << "_i: " << _i << std::endl;
    std::cout << "_str: " << _str << std::endl;
}
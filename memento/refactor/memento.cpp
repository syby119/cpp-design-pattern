#include "memento.h"

Mememto::Mememto(int i, const std::string& str): _i(i), _str(str) { }

int Mememto::getI() const {
    return _i;
}

std::string Mememto::getStr() const {
    return _str;
}
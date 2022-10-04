#pragma once

#include <string>
#include "memento.h"

class Originator {
public:
    void setI(int i);
    void setStr(const std::string& str);

    Mememto createMememto();
    void setMememto(const Mememto& memoto);

    void printState() const;
private:
    int _i;
    std::string _str;
};
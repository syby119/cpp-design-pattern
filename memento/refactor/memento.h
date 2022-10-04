#pragma once
#include <string>

class Mememto {
public:
    Mememto(int i, const std::string& str);

    int Mememto::getI() const;

    std::string Mememto::getStr() const;
private:
    int _i;
    std::string _str;
};
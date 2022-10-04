#pragma once

#include <string>

class Originator {
public:
    int getI() const;
    std::string getStr() const;
    void setI(int i);
    void setStr(const std::string& str);

    void printState() const;
private:
    int _i;
    std::string _str;
};
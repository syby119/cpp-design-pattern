#include <iostream>
#include <string>

#include "originator.h"

int main() {
    Originator originator;
    originator.setI(100);
    originator.setStr("hello");
    
    std::cout << "Initial state" << std::endl;
    originator.printState();

    int i = originator.getI();
    std::string str = originator.getStr();

    originator.setI(200);
    originator.setStr("hi");

    std::cout << "Changed state" << std::endl;
    originator.printState();

    originator.setI(i);
    originator.setStr(str);

    std::cout << "Recovered state" << std::endl;
    originator.printState();

    return 0;
}
#include <iostream>
#include "memento.h"
#include "originator.h"

int main() {
    Originator originator;
    originator.setI(100);
    originator.setStr("hello");
    
    std::cout << "Initial state" << std::endl;
    originator.printState();

    Mememto mememto = originator.createMememto();

    originator.setI(200);
    originator.setStr("hi");

    std::cout << "Changed state" << std::endl;
    originator.printState();

    originator.setMememto(mememto);
    std::cout << "Recovered state" << std::endl;
    originator.printState();

    return 0;
}
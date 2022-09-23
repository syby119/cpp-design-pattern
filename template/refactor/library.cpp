#include <iostream>
#include "library.h"

void Library::run() {
    step1();

    if (step2()) {
        step3();
    }

    for (int i = 0; i < 4; ++i) {
        step4();
    }

    step5();
}

void Library::step1() {
    std::cout << "void Library::step1()" << std::endl;
}

void Library::step3() {
    std::cout << "void Library::step3()" << std::endl;
}

void Library::step5() {
    std::cout << "void Library::step5()" << std::endl;
}

bool Library::step2() {
    std::cout << "bool Library::step2()" << std::endl;

    return true;
}

void Library::step4() {
    std::cout << "void Library::step4()" << std::endl;
}
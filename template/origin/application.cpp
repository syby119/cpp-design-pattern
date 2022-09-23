#include <iostream>
#include "application.h"

void Application::run() {
    step1();

    if (step2()) {
        step3();
    }

    for (int i = 0; i < 4; ++i) {
        step4();
    }

    step5();
}

bool Application::step2() {
    std::cout << "bool Application::step2()" << std::endl;
    return true;
}

void Application::step4() {
    std::cout << "void Application::step4()" << std::endl;
}
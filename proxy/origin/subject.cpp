#include <iostream>
#include "subject.h"

std::string Subject::process(const std::string& request) {
    std::cout << "get " << request << std::endl;
    return "response";
}
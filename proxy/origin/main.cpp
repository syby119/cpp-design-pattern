#include <iostream>
#include <string>

#include "subject.h"

int main() {
    Subject subject;

    std::string request = "Request";
    std::string response = subject.process(request);
    std::cout << response << std::endl;
    
    return 0;
}
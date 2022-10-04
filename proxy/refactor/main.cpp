#include <iostream>
#include <memory>
#include <string>

#include "proxy.h"

int main() {
    auto subject = std::make_unique<Proxy>();

    std::string request = "Request";
    std::string response = subject->process(request);

    std::cout << response << std::endl;

    return 0;
}
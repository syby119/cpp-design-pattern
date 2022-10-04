#include <iostream>
#include "proxy.h"

std::string Proxy::process(const std::string& request) {
    std::string response;
    if (connect(request)) {
        sendRequest(request);
        response = getResponse();
        disconnect(request);
    } else {
        response = "Error: connect failure";
    }

    return response;
}

void Proxy::sendRequest(const std::string& request) {
    std::cout << "send request" << std::endl;
}

std::string Proxy::getResponse() {
    return "response from real subject";
}

bool Proxy::connect(const std::string& request) {
    return true;
}

bool Proxy::disconnect(const std::string& request) {
    return true;
}
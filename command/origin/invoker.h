#pragma once
#include <string>

class Invoker1 {
public:
    void executeCommandA();

    void executeCommandB(const std::string& args);
};

class Invoker2 {
public:
    void executeCommandA();

    void executeCommandB(const std::string& args);
};
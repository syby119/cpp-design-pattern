#pragma once
#include <string>

class Invoker {
public:
    virtual ~Invoker() = default;

    void executeCommandA();

    void executeCommandB(const std::string& args);
};
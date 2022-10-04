#pragma once
#include <string>

class Command {
public:
    virtual ~Command() = default;

    virtual void execute() = 0;
};

class CommandA: public Command {
public:
    void execute() override;
};

class CommandB: public Command {
public:
    CommandB(const std::string& args);
    
    void execute() override;
private:
    std::string _args;
};
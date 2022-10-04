#include <iostream>
#include "command.h"

void CommandA::execute() {
    std::cout << "CommandA::execute()" << std::endl;
}

CommandB::CommandB(const std::string& args): _args(args) { }

void CommandB::execute() {
    std::cout << "CommandB::execute() " << _args << std::endl;
}
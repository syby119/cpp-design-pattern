#pragma once
#include "command.h"

class Invoker {
public:
    virtual ~Invoker() = default;

    void setCommand(Command* command);

    void executeCommand();

protected:
    Command* _command = nullptr;
};
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

class Invoker1: public Invoker {

};

class Invoker2: public Invoker {

};
#include "invoker.h"

void Invoker::setCommand(Command* command) {
    _command = command;
}

void Invoker::executeCommand() {
    _command->execute();
}
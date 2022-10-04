#include <memory>
#include <vector>

#include "command.h"
#include "invoker.h"

int main() {
    std::vector<std::unique_ptr<Command>> commands;
    commands.emplace_back(new CommandA);
    commands.emplace_back(new CommandB(" -A args"));

    Invoker invoker;

    for (auto& command: commands) {
        invoker.setCommand(command.get());
        invoker.executeCommand();
    }

    return 0;
}
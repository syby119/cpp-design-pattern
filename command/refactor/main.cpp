#include <memory>
#include <vector>

#include "command.h"
#include "invoker.h"

int main() {
    std::vector<std::unique_ptr<Command>> commands;
    commands.emplace_back(new CommandA);
    commands.emplace_back(new CommandB(" -A args"));

    std::vector<std::unique_ptr<Invoker>> invokers;
    invokers.emplace_back(new Invoker1);
    invokers.emplace_back(new Invoker2);

    for (auto& invoker: invokers) {
        for (auto& command: commands) {
            invoker->setCommand(command.get());
            invoker->executeCommand();
        }
    }

    return 0;
}
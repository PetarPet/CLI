//
// Created by Petar on 7.11.2024..
//

#include "../h/FactoryCommand.h"

#include <stdexcept>

#include "../h/CommandEcho.h"
#include "../h/CommandPrompt.h"

AbstractCommand * FactoryCommand::CreateCommand(const CommandDecomposition& cmd) {
    if (cmd.command_part == "echo") {
        return new CommandEcho(cmd);
    }
    if(cmd.command_part == "prompt") {
        return new CommandPrompt(cmd);
    }

    throw std::invalid_argument("Unknown command.");
}

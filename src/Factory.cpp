//
// Created by Petar on 7.11.2024..
//

#include "../h/Factory.h"

#include <stdexcept>

#include "../h/DateCommand.h"
#include "../h/EchoCommand.h"
#include "../h/PromptCommand.h"
#include "../h/RemoveCommand.h"
#include "../h/TimeCommand.h"
#include "../h/TouchCommand.h"
#include "../h/TruncateCommand.h"

AbstractCommand * Factory::CreateCommand(const CommandDecomposition& cmd) {
    if (cmd.command_part == "echo") {
        return new EchoCommand(cmd);
    }
    if(cmd.command_part == "prompt") {
        return new PromptCommand(cmd);
    }
    if(cmd.command_part == "time") {
        return new TimeCommand(cmd);
    }
    if(cmd.command_part == "date") {
        return new DateCommand(cmd);
    }
    if(cmd.command_part == "touch") {
        return new TouchCommand(cmd);
    }
    if(cmd.command_part == "truncate") {
        return new TruncateCommand(cmd);
    }
    if(cmd.command_part == "rm") {
        return new RemoveCommand(cmd);
    }
    throw std::invalid_argument("Unknown command.");
}

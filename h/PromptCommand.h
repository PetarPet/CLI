//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDPROMPT_H
#define COMMANDPROMPT_H

#include <utility>

#include "AbstractCommand.h"

class PromptCommand: public AbstractCommand {
public:
    explicit PromptCommand(CommandDecomposition cmd):AbstractCommand(std::move(cmd)){}
    void execute() override;

    ~PromptCommand() override = default;

private:
};

#endif //COMMANDPROMPT_H

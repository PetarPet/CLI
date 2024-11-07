//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDPROMPT_H
#define COMMANDPROMPT_H

#include <utility>

#include "AbstractCommand.h"

class CommandPrompt: public AbstractCommand {
public:
    explicit CommandPrompt(CommandDecomposition cmd):AbstractCommand(std::move(cmd)){}
    void execute() override;

    ~CommandPrompt() override = default;

private:
};

#endif //COMMANDPROMPT_H

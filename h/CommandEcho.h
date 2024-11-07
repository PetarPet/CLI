//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDECHO_H
#define COMMANDECHO_H
#include <utility>

#include "AbstractCommand.h"

class CommandEcho: public AbstractCommand {
public:
    explicit CommandEcho(CommandDecomposition cmd):AbstractCommand(std::move(cmd)){}
    void execute() override;
    ~CommandEcho() override = default;

private:
};

#endif //COMMANDECHO_H

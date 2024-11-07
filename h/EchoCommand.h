//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDECHO_H
#define COMMANDECHO_H
#include <utility>

#include "AbstractCommand.h"

class EchoCommand: public AbstractCommand {
public:
    explicit EchoCommand(CommandDecomposition cmd):AbstractCommand(std::move(cmd)){}
    void execute() override;
    ~EchoCommand() override = default;

private:
};

#endif //COMMANDECHO_H

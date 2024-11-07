//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDTIME_H
#define COMMANDTIME_H

#include "AbstractCommand.h"

class CommandTime: public AbstractCommand {
public:
    explicit CommandTime(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }
    ~CommandTime() override = default;

    void execute() override;
};

#endif //COMMANDTIME_H

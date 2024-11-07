//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDTIME_H
#define COMMANDTIME_H

#include "AbstractCommand.h"

class TimeCommand: public AbstractCommand {
public:
    explicit TimeCommand(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }
    ~TimeCommand() override = default;

    void execute() override;
};

#endif //COMMANDTIME_H

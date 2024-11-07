//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDDATE_H
#define COMMANDDATE_H

#include "AbstractCommand.h"

class DateCommand : public AbstractCommand {
public:
    explicit DateCommand(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }

    ~DateCommand() override = default;

    void execute() override;

private:
};

#endif //COMMANDDATE_H

//
// Created by Petar on 7.11.2024..
//

#ifndef REMOVECOMMAND_H
#define REMOVECOMMAND_H
#include "AbstractCommand.h"

class RemoveCommand:public AbstractCommand {
public:
    explicit RemoveCommand(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }

    ~RemoveCommand() override = default;

    void execute() override;
};

#endif //REMOVECOMMAND_H

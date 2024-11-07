//
// Created by Petar on 7.11.2024..
//

#ifndef TRUNCATECOMMAND_H
#define TRUNCATECOMMAND_H

#include "AbstractCommand.h"

class TruncateCommand:public AbstractCommand {
public:
    explicit TruncateCommand(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }

    ~TruncateCommand() override = default;

    void execute() override;
};

#endif //TRUNCATECOMMAND_H

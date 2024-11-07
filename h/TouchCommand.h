//
// Created by Petar on 7.11.2024..
//

#ifndef TOUCHCOMMAND_H
#define TOUCHCOMMAND_H
#include "AbstractCommand.h"

class TouchCommand:public AbstractCommand {
public:
    explicit TouchCommand(const CommandDecomposition &cmd)
        : AbstractCommand(cmd) {
    }

    ~TouchCommand() override = default;

    void execute() override;
private:

};

#endif //TOUCHCOMMAND_H

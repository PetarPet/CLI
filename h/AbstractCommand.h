//
// Created by Petar on 7.11.2024..
//

#ifndef COMMAND_H
#define COMMAND_H

#include <utility>

#include "InputParser.h"

/* Abstract Command is superclass from which every concrete command is inherited
 */
class AbstractCommand {
public:
    virtual void execute() = 0;
    virtual ~AbstractCommand() = default;
    explicit AbstractCommand(CommandDecomposition cmd):command_decomposition(std::move(cmd)){}
protected:
    CommandDecomposition command_decomposition;
};

#endif //COMMAND_H

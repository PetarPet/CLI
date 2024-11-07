//
// Created by Petar on 7.11.2024..
//

#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H

#include "AbstractCommand.h"

// CONCRETE FACTORY DESIGN PATTERN FOR CREATION OF COMMANDS
class Factory {
public:
    static AbstractCommand* CreateCommand(const CommandDecomposition& cmd);
};

#endif //COMMANDFACTORY_H

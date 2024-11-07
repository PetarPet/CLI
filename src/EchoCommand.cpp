//
// Created by Petar on 7.11.2024..
//

#include "../h/EchoCommand.h"

#include <iostream>

void EchoCommand::execute() {
    std::cout << this->command_decomposition.argument_part<<std::endl;
}

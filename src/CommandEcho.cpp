//
// Created by Petar on 7.11.2024..
//

#include "../h/CommandEcho.h"

#include <iostream>

void CommandEcho::execute() {
    std::cout << this->command_decomposition.argument_part<<std::endl;
}

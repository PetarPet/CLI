//
// Created by Petar on 7.11.2024..
//

#include "../h/CommandPrompt.h"

#include <stdexcept>

extern std::string PROMPT_SIGN;

void CommandPrompt::execute() {
    if(this->command_decomposition.argument_part.empty()) {
        throw std::invalid_argument("Missing argument value for command.");
    }
    PROMPT_SIGN = this->command_decomposition.argument_part;
}

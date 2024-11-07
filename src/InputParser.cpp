//
// Created by Petar on 7.11.2024..
//

#include <utility>
#include <sstream>

#include "../h/InputParser.h"

InputParser* InputParser::instance = nullptr;

InputParser * InputParser::GetInstance() {
    if (!instance) {
        instance = new InputParser();
    }
    return instance;
}

void InputParser::ProcessInputString(const std::string& inputString) {
    std::istringstream iss(inputString);

    // Reading command
    iss >> this->command_decomposition.command_part;
    if (this->command_decomposition.command_part.empty()) {
        throw std::invalid_argument("Command not found.");
    }

    iss >> std::ws;
    if(iss.peek()== '-') {
        iss >> this->command_decomposition.option_part;
        this->command_decomposition.option_part = this->command_decomposition.option_part[1];
    }

    // Run over white spaces
    iss >> std::ws;

    // Checking arguments
    if (iss.peek() == '"') {
        iss.get();

        std::getline(iss, this->command_decomposition.argument_part, '"');

        if (this->command_decomposition.argument_part.empty() && iss.peek() != '"') {
            throw std::invalid_argument("Missing \".");
        }
        char nextChar = iss.peek();
        if (nextChar != EOF && !std::isspace(nextChar)) {
            throw std::invalid_argument("Argument must be enclosed with \"\".");
        }
    } else {
        if (iss.peek() != EOF) {
            throw std::invalid_argument("AArgument must be enclosed with \"\".");
        }
    }
}

void InputParser::ClearCommandDecomposition() {
    this->command_decomposition.command_part.clear();
    this->command_decomposition.argument_part.clear();
    this->command_decomposition.option_part.clear();
}

CommandDecomposition InputParser::GetCommandDecomposition() const {
    return this->command_decomposition;
}

void InputParser::SetCommandDecomposition(CommandDecomposition cmd) {
    this->command_decomposition = std::move(cmd);
}

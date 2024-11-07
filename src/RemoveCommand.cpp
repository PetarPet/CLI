//
// Created by Petar on 7.11.2024..
//

#include "../h/RemoveCommand.h"

#include <stdexcept>
#include <filesystem>
#include <iostream>

void RemoveCommand::execute() {
    if(this->command_decomposition.argument_part.empty()) {
        throw std::invalid_argument("Missing argument value for command.");
    }

    std::filesystem::__cxx11::path dir_path = "C:/Users/Petar/Desktop/CLI/myfiles";
    std::filesystem::__cxx11::path file_path = dir_path / this->command_decomposition.argument_part;

    // Removal of file
    try {
        if (std::filesystem::remove(file_path)) {
            std::cout << "File '" << this->command_decomposition.argument_part << " has been deleted." << std::endl;
        } else {
            std::cout << "File '" << this->command_decomposition.argument_part << "' doesn't exist." << std::endl;
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}

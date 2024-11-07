//
// Created by Petar on 7.11.2024..
//

#include "../h/TruncateCommand.h"

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

void TruncateCommand::execute() {
    if (this->command_decomposition.argument_part.empty()) {
        throw std::invalid_argument("Missing argument value for command.");
    }

    std::filesystem::__cxx11::path dir_path = "C:/Users/Petar/Desktop/CLI/myfiles";
    std::filesystem::__cxx11::path file_path = dir_path / this->command_decomposition.argument_part;


    // Check if file exists
    if (std::filesystem::exists(file_path)) {
        std::ofstream file(file_path, std::ios::trunc);

        if (file) {
            std::cout << "The content of file'" << this->command_decomposition.argument_part << "' is deleted." <<
                    std::endl;
        } else {
            throw std::invalid_argument("Unexpected error occured while opening file!");
        }
    } else {
        throw std::invalid_argument("Specified file doesn't exist!");
    }
}

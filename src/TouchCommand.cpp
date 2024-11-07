//
// Created by Petar on 7.11.2024..
//

#include "../h/TouchCommand.h"

#include <iostream>
#include <fstream>
#include <filesystem>

void TouchCommand::execute() {
    if(this->command_decomposition.argument_part.empty()) {
        throw std::invalid_argument("Argument for command not specified. No file name given.");
    }

    std::filesystem::__cxx11::path dir_path = "C:/Users/Petar/Desktop/CLI/myfiles";

    std::filesystem::__cxx11::path file_path = dir_path / this->command_decomposition.argument_part;

    // Check if file already exists
    if (std::filesystem::exists(file_path)) {
        throw std::invalid_argument("File already exists!");
    } else {
        // create file because it doesn't exist
        std::ofstream file(file_path);

        if (file) {
            std::cout<<"File created successfully."<<std::endl;
        } else {
            throw std::invalid_argument("File hasn't been created. Unexpected error occured during creation!");
        }
    }
}

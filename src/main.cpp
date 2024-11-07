#include <iostream>
#include <pstl/execution_defs.h>

#include "../h/InputParser.h"
#include "../h/Factory.h"
#include "../h/AbstractCommand.h"

using namespace std;

std::string PROMPT_SIGN = "$";

int main() {
    std::cout << "Welcome to CLI!" << std::endl;

    while(true) {
        std::cout << PROMPT_SIGN;

        // Get input string
        std::string input_string;
        getline(std::cin,input_string);
        if (input_string.size()>32) {
            std::cout << "Command to long! Try again." << std::endl;
        } else {
            try {
                // invoke parser
                InputParser* parser = InputParser::GetInstance();
                parser->ClearCommandDecomposition();
                parser->ProcessInputString(input_string);

                AbstractCommand* command = Factory::CreateCommand(parser->GetCommandDecomposition());
                command->execute();
            } catch (const std::exception& e) {
                std::cout << "Error: " << e.what() << std::endl;
            }
        }
    }
    return 0;
}

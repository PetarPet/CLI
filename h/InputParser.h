//
// Created by Petar on 7.11.2024..
//

#ifndef INPUTPARSER_H
#define INPUTPARSER_H
#include <string>

/* CommandDecomposition is help struct in which parser puts extracted pieces
 * of input string */
struct CommandDecomposition {
    std::string command_part;
    std::string option_part;
    std::string argument_part;
};

/* InputParser is singleton class which parses input string
 * in order to extract command code, option and argument */

class InputParser {
public:
    static InputParser* GetInstance();
    void ProcessInputString(const std::string& inputString);

    void ClearCommandDecomposition();
    [[nodiscard]] CommandDecomposition GetCommandDecomposition() const;
    void SetCommandDecomposition(CommandDecomposition cmd);
private:
    static InputParser* instance;
    CommandDecomposition command_decomposition;
};

#endif //INPUTPARSER_H

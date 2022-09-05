#include "function.hpp"


namespace token {
    void token_Step(const std::string &cmd, std::vector<lex::Token> &tokens) {
        if(code.instruct.size()==0) {
            stream << "Error: You must run build first.<br>";
            return;
        }
        code.printCurrent();
        code.step();
        stream << "Registers: <br>";
        code.print();
    }
}

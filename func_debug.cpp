#include "function.hpp"


namespace token {
    void token_Debug(const std::string &cmd, std::vector<lex::Token> &tokens) {
        if(code.instruct.size()==0) {
            stream << "Error you must build first.<br>";
            return;
        }
        code.start(true);
    }
}

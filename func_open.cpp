#include "function.hpp"

namespace token {
    void token_Open(const std::string &command, std::vector<lex::Token> &v) {
        if(v[1].getTokenType() != lex::TOKEN_STRING) {
            stream << "open requires string operand in quotes.<br>";
            return;
        }
        std::string filename;
        filename = v[1].getToken();
        if(interp::openLineSource(filename)) {
            stream << "Loaded: " << filename << "<br>";
        } else {
            stream << "Could not load file: " << filename << "<br>";
        }
    }
}

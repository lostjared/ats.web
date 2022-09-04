#include "function.hpp"

namespace token {
    void token_List(const std::string &command, std::vector<lex::Token> &v) {
        for(auto i = interp::lines.begin(); i != interp::lines.end(); ++i) {
            stream << std::dec << i->index << " " << i->text << "<br>";
        }
        stream << "<br>Program contains " << std::dec << interp::lines.size() << " lines of code<br>";
    }

}

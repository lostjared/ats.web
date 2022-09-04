#include "function.hpp"

namespace token {
    void token_HTML(const std::string &command, std::vector<lex::Token> &tokens) {
        if(tokens[1].getTokenType() != lex::TOKEN_STRING) {
            stream << "Error command requires string with filename.<br>";
            return;
        }
        if(code.instruct.size()==0) {
            stream << "Error: Must run build command first.<br>";
            return;
        }
        std::string fname = tokens[1].getToken();
        std::fstream file;
        file.open(fname, std::ios::out);
        if(!file.is_open()) {
            stream << "Error: file " << fname << " could not be opened for writing.<br>";
            return;
        }
        file << "<!DOCTYPE html><br><html><br><head><title>ats (Atari Script) - Debug Information</title></head><br><body><br>";
        file << "<table border=\"1\" cellpadding=\"3\" cellspacing=\"3\"><br>";
        file << "<tr><th>Line</th><th>Address Mode</th><th>Instruction</th><th>Machine Code</th></tr><br>";
        for(unsigned int i = 0; i < code.instruct.size(); ++i) {
            file << "<tr>";
            file << "<th>" << code.instruct[i].line_num << "</th>";
            file << "<th>" << interp::add_mode[code.instruct[i].mode] << "</th>";
            file << "<th>" << code.instruct[i].text << "</th>";
            file << "<th>" << icode::instructionToHex(code.instruct[i]) << "</th>";
            file << "</tr><br>";
        }
        file << "<br></table><br>";
        file << "<br></body><br></html><br>";
        file.close();
        stream << "Wrote HTML debug info to file: " << fname << "<br>";
        
    }
}

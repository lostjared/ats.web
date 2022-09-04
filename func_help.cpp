#include "function.hpp"


namespace token {
    
    class SortedCommand {
    public:
        SortedCommand() {}
        std::string name;
        Command cmd;
        SortedCommand(const SortedCommand &c) : name(c.name), cmd(c.cmd) {}
        
        SortedCommand &operator=(const SortedCommand &c) {
            name = c.name;
            cmd = c.cmd;
            return *this;
        }
        
        SortedCommand(std::string n, Command c) {
            name = n;
            cmd = c;
        }
        
        bool operator<(const SortedCommand &e) const {
            return (name < e.name);
        }
    };
    
    void token_Help(const std::string &command, std::vector<lex::Token> &tokens) {
        static std::vector<SortedCommand> names;
        if(names.size() == 0) {
            for(auto i = function_map.begin(); i != function_map.end(); ++i) {
                names.push_back(SortedCommand(i->first, i->second));
            }
            std::sort(names.begin(), names.end());
        }
        if(tokens.size()==2) {
            std::string value = tokens[1].getToken();
            auto val = function_map.find(value);
            if(val == function_map.end()) {
                stream << "Error: requires valid command to look up.<br>";
                return;
            }
            std::string textValue = val->second.help_text;
            stream << "Description: " << textValue << "<br><br>";
        } else if(tokens.size()==1) {
            stream << "Command list:<br><br>quit<br>description: quit application<br><br>";
        	for(auto i = names.begin(); i != names.end(); ++i) {
            	stream << i->name  << "<br>" "Description: " <<  i->cmd.help_text << "<br><br>";
        	}
        } else {
            stream << "Error: requires zero or one argument of command to look up.<br>";
            return;
        }
    }
}

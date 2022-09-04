#include "function.hpp"

interp::Code code;

std::unordered_map<std::string, Command> function_map = {
    { "convert",Command(token::token_Convert, 0, "Convert stored code to tokens <br>Use:<br>convert") },
    { "list",Command(token::token_List, 0, "List source code<br>Use:<br>list") },
    { "save",Command(token::token_Save, 1, "Save stored code<br>Use:<br>save \"filename\"") },
    { "open",Command(token::token_Open, 1, "Open code from file<br>Use:<br>open \"filename\"") },
    { "clear",Command(token::token_Clear, 0, "Clear all lines<br>Use:<br>clear")},
    { "remove",Command(token::token_Remove, 1, "Remove individual line argument 1 is line number<br>Use:<br>remove index") },
    { "display",Command(token::token_Display, 1, "Display indivdual line<br>Use:<br>display line") },
    { "symbols",Command(token::token_DisplaySymbols, 0, "Print stored shell variable symbols<br>Use:<br>symbols") },
    { "symbol", Command(token::token_DisplaySymbol, 1, "Print indivdual symbol argument is the name<br>Use:<br>symbol variable") },
    { "unsym", Command(token::token_Unsym, -1, "Remove symbol from table<br>Use:<br>unsym variable") },
    { "execute", Command(token::token_Execute, 0, "Execute compiled code<br>Use:<br>execute") },
    { "help", Command(token::token_Help, -1, "Print help message<br>Use:<br>help") },
    { "sh", Command(token::token_sh, 1, "Execute shell command stored in argument one as a string<br>Use:<br>sh \"command\"") },
    { "html", Command(token::token_HTML, 1, "Print code info to HTML<br>Use:<br>html \"filename\"") },
    { "procinfo", Command(token::token_ProcInfo, 0, "Print registers to console<br>Use:<br>procinfo") },
    { "setreg", Command(token::token_SetReg, 2, "Set register to value<br>Use:<br>setreg register value") },
    { "peek", Command(token::token_Peek, 1, "Show memory location argument one is memory address<br>Use:<br>peek address") },
    { "poke", Command(token::token_Poke, 2, "Store value in memory location argument one is memory argument two is value (symbol or constant)<br>Use:<br>poke address value") },
    { "setsym", Command(token::token_SetSym, 2, true, "Set symbol value in Symbol Table<br>Use:<br>setsym variable value") },
    { "tokenize", Command(token::token_Tokenize, -1, "Tokenize string<br>Use:<br>tokenize string") },
    { "expr", Command(token::token_Expression, -1, "Parse Expression ofor symbols<br>Use:<br>expr expression") },
    { "build", Command(token::token_Build, 0, "Build code<br>Use:<br>build") },
    { "print", Command(token::token_Print, 0, "Print out information about built code<br>Use:<br>print") },
    { "code", Command(token::token_Code, 0, "Print out Hex values for Machine lanauge<br>Use:<br>code") },
    { "step", Command(token::token_Step, 0, "Make Step in debugger<br>Use:<br>step") },
    { "memory", Command(token::token_Memory, 2, "Print memory range argument one is hex value starting value range argument two is hex value stop value range<br>Use:<br>memory start stop") },
    { "peek16", Command(token::token_Peek16, 1, "Peek 16 bit value from memory.<br>Use:peek16 address value") },
    { "insert", Command(token::token_Insert, -1, "Insert a stream of bytes at a starting address<br>Use: insert startaddress val1 val2 val3 ....") },
    { "continue", Command(token::token_Continue, 0, "Continue execution<br>Use: continue") },
    { "debug", Command(token::token_Debug, 0, "Run program with debug information<br>Use: debug") },
    { "stack", Command(token::token_Stack, 0, "Display contents of stack<br>Use: stack") },
    { "bin", Command(token::token_Bin, -1, "Convert to Binary<br>Use: bin numbers") },
    { "int", Command(token::token_Integer, -1, "Output bin/dec/hex for Integer value<br>Use: int base values") }
};

namespace token {
    
}

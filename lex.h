#ifndef LEXER_H
#define LEXER_H

#include "token.h"
#include "jc.h"
#include <variant>

using namespace std;

struct Lexer {
    string& c_stream;
    SymbolTable& s_table;
	Lexer(string& _c_stream, SymbolTable& _s_table);
	void lex(TokenStream& t_stream);
};

#endif

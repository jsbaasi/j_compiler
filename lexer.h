#ifndef LEXER_H
#define LEXER_H

#include "token.h"

using namespace std;

struct Lexer {
	Lexer(string);	
	TokenStream lex();
};

#endif

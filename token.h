#ifndef TOKEN_H
#define TOKEN_H

#include <vector>

using namespace std;

enum TokenType;
struct Token;
using TokenStream = vector<Token>;

enum TokenType {
	ID;
	DIGIT;
	DIV_OP;
	MULT_OP;
	ADD_OP;
	SUB_OP;
};

struct Token {
	TokenType type;
	int symbol_table_entry;
};

#endif

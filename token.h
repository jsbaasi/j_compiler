#ifndef TOKEN_H
#define TOKEN_H

#include <vector>
#include <optional>
#include "jc.h"

using namespace std;

enum class TokenType;

enum class TokenType {
	ID,
	DIGIT,
	DIV_OP,
	MUL_OP,
	ADD_OP,
	SUB_OP,
};

struct Token {
	TokenType type;
	optional<Attribute> attribute;
    friend ostream& operator<<(ostream& os, const Token& t);
};

#endif

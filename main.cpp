#include <iostream>
#include "lexer.h"
#include "syntax.h"
#include "semantic.h"

using namespace std;

int main() {
	string input_stream{};
	cin >> input_stream;

	auto l = Lexer(input_stream);
	auto token_stream = l.lex();
	auto sy = Syntax(token_stream);
	auto ast_syntax = sy.parse();
	auto se = Semantic(ast_syntax);
	auto ast_semantic = se.parse();

	return 0;
}

#include <iostream>
#include "lex.h"
#include "syntax.h"
#include "semantic.h"
#include "jc.h"

using namespace std;

int main() {
	string input_stream{};
    TokenStream token_stream{};
    SymbolTable symbol_table{};

	cin >> input_stream;

	auto l = Lexer(input_stream, symbol_table);
	l.lex(token_stream);

	auto sy = Syntax(token_stream);
	sy.parse();
	auto se = Semantic();
	se.parse();

	return 0;
}

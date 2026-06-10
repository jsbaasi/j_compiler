#include "lex.h"
#include "jc.h"
#include "token.h"

#include <iostream>
#include <optional>

Lexer::Lexer(string& _c_stream, SymbolTable& _s_table) :
    c_stream{_c_stream}, s_table{_s_table}
{}

void Lexer::lex(TokenStream& t_stream) {
    using TT = TokenType;
    int i{};
    while (i<c_stream.size()) {
        switch (c_stream[i]) {
            case '/': t_stream.push_back({TT::DIV_OP, nullopt}); i++; break;
            case '*': t_stream.push_back({TT::MUL_OP, nullopt}); i++; break;
            case '+': t_stream.push_back({TT::ADD_OP, nullopt}); i++; break;
            case '-': t_stream.push_back({TT::SUB_OP, nullopt}); i++; break;
            default: t_stream.push_back({TT::DIGIT, static_cast<int>(c_stream[i]-48)}); i++; break;
        }
    }
}

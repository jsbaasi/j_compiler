#ifndef JC_H
#define JC_H

#include <variant>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

struct Token;
using Attribute = variant<string, int, float>;
using SymbolTable = unordered_map<string, Attribute>;
using TokenStream = vector<Token>;


#endif

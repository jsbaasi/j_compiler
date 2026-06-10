#ifndef SYNTAX_H
#define SYNTAX_H

#include "jc.h"

struct Syntax {
    Syntax(TokenStream& t_stream);
    void parse();
};

#endif

src := "main.cpp lex.cpp syntax.cpp semantic.cpp token.cpp"
alias t := test

build:
    mkdir -p build
    g++ --std=c++26 {{src}} -o build/jc

test: build
    ./build/jc < tests/test1.j

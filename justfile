src := "main.cpp lex.cpp syntax.cpp semantic.cpp token.cpp"
bin := "build/jc"
alias t := test

build:
    mkdir -p build
    g++ --std=c++26 {{src}} -o {{bin}}

test: build
    ./{{bin}} < tests/test1.j

build:
	clang++ main.cpp -o build/jc

test: build
	./build/jc < tests/test1.j

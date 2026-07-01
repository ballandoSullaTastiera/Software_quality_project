CC = gcc

.PHONY: all build test clean check

all: build

build: 
	cmake -S . -B build
	cmake --build build

test: 
	cmake --build build --target test -- ARGS="--output-on-failure"
	
clean:
	cmake -E remove_directory build

check:
	
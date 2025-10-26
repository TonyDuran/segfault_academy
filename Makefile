# Simple Makefile for segfault_academy

BUILD_DIR := build

.PHONY: all build test clean

all: build test

build:
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

test:
	ctest --test-dir $(BUILD_DIR) --output-on-failure

clean:
	rm -rf $(BUILD_DIR)


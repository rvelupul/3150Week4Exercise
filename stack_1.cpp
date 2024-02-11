#include "stack_1.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

void pushToStack(std::stack<Item>& stack, const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("Cannot open file: " + filename);
    }
    int value;
    while (file >> value) {
        stack.push({value});
    }
}

void popStack(std::stack<Item>& stack) {
    int sum = 0;
    while (!stack.empty()) {
        Item item = stack.top();
        stack.pop();
        sum += item.value;
        if (sum < 0) {
            throw std::runtime_error("Negative sum detected in stack");
        }
    }
}

#ifndef STACK_1_H
#define STACK_1_H

#include <stack>
#include <string>
#include "item.h" 

void pushToStack(std::stack<Item>& stack, const std::string& filename);
void popStack(std::stack<Item>& stack);

#endif 

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack_1.h"
#include "queue_1.h"
#include <fstream>
#include <iostream>
#include <stack>
#include <queue>


TEST_CASE("Verify stack size after pushing from file") {
    std::stack<Item> stack;
    pushToStack(stack, "input.txt"); 
    CHECK_EQ(stack.size(), 6); 
}


TEST_CASE("Check for non-negative sum after popping all elements might throw exception") {
    std::stack<Item> stack;
    
    pushToStack(stack, "input.txt"); 

    CHECK_THROWS(popStack(stack));
}

TEST_CASE("popStack with negative sum") {
    std::stack<Item> testStack;
    testStack.push({-1});
    testStack.push({1});
    testStack.push({-3});

    CHECK_THROWS_AS(popStack(testStack), std::runtime_error); 
}



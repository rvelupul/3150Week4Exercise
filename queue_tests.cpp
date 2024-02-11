#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "queue_1.h"
#include <fstream>
#include <iostream>
#include <queue>

TEST_CASE("Testing enqueue") {
    std::queue<Item> testQueue;
    enqueue(testQueue, "input.txt"); 
    CHECK_EQ(testQueue.size(), 6); 

    if (!testQueue.empty()) {
        CHECK_EQ(testQueue.front().value, 2); 
    } else {
        WARN("Queue is unexpectedly empty after enqueueing.");
    }
}

TEST_CASE("Queue operation validations") {
    std::queue<Item> testQueue;
    enqueue(testQueue, "input.txt"); 
    
    bool negativeSumExceptionCaught = false;
    try {
        dequeue(testQueue);
    } catch (const std::runtime_error&) {
        negativeSumExceptionCaught = true;
    }

    CHECK_FALSE(negativeSumExceptionCaught); 
}

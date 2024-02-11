#include "queue_1.h"
#include <fstream>
#include <iostream>
#include <stdexcept>

void enqueue(std::queue<Item>& queue, const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        throw std::runtime_error("Cannot open file: " + filename);
    }
    int value;
    while (file >> value) {
        queue.push({value});
    }
}

void dequeue(std::queue<Item>& queue) {
    int sum = 0;
    while (!queue.empty()) {
        Item item = queue.front();
        queue.pop();
        sum += item.value;
        if (sum < 0) {
            throw std::runtime_error("Negative sum detected in queue");
        }
    }
}
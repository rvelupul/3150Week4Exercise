#ifndef QUEUE_1_H
#define QUEUE_1_H

#include <queue>
#include <string>
#include "item.h" 

void enqueue(std::queue<Item>& queue, const std::string& filename);
void dequeue(std::queue<Item>& queue);

#endif 

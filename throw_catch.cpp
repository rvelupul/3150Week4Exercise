#include <iostream>
#include "stack_1.h" 
#include "queue_1.h" 
#include <stack>
#include <queue>

int main() {
    std::stack<Item> myStack; 
    std::queue<Item> myQueue; 

    try {
        
        pushToStack(myStack, "input.txt"); 
        popStack(myStack); 
        std::cout << "Stack processing completed successfully." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught during stack processing: " << e.what() << std::endl;
    }

    try {
        
        enqueue(myQueue, "input.txt"); 
        dequeue(myQueue); 
        std::cout << "Queue processing completed successfully." << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught during queue processing: " << e.what() << std::endl;
    }

    return 0;
}

//#include "testQueue.h"
#include "testQueue.cpp"

/*
ATTRIBUTES
- original code used incorrect arithmetic to count front and rear nodes
- using an array for a dynamically allocated queue data structure
- queue functions originally didn't return any values from 
        queue() and dequeue()
- separating testQueue class into two separate header and cpp files
- comments like "main function" are redundant
- using namespace std
*/


// main function
int main()
{
    testQueue task;
    task.testSize();
    task.testIsEmpty();
    task.testIsFull();
    task.testDequeue();
    task.testEnqueue();
    task.testPeek();
    return 0;
}

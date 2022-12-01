#ifndef QUEUE_H_
#define QUEUE_H_
#include <cstddef>
#include "Node.h"
using namespace std;

/*
    Declaration of the Queue class
*/
class Queue
{
public:
    Queue() : front_of_queue(NULL), rear_of_queue(NULL) {}
    void push(int item);
    void pop();
    const int front() const;
    void move_to_rear();
    size_t size();
    void print();
private:
    Node* front_of_queue;
    Node* rear_of_queue;
    Node* temp;
    size_t num_items = 0;

    bool is_empty();
};
#endif // !QUEUE_H_


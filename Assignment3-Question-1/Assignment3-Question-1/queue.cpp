#include <iostream>
#include "Node.h"
#include "queue.h"
using namespace std;

/*
    Implementation of the Queue class
*/
void Queue::push(int item)
{   /*
	Pushes a new Node onto the queue. If it is empty the front and rear point to same Node.
	*/
	temp = new Node();
	temp->data = item;
	temp->next = NULL;
	if (is_empty())
	{
		front_of_queue = temp;
		rear_of_queue = temp;
	}
	else
	{
		rear_of_queue->next = temp;
		rear_of_queue = temp;
	}
	num_items++;
}

void Queue::pop()//pop
{   /*
    Pops Node off of the top of the queue. If empty a message prints.
    */
    if (is_empty()) {
        cout << "Nothing to pop. The queue is empty." << endl;;
        return;
    }
    temp = front_of_queue;
    front_of_queue = front_of_queue->next;
    delete temp;
    num_items--;
}

void Queue::move_to_rear() {
    /*
    Moves the front Node to the rear of the queue.
    */
    if (is_empty()) {
        cout << "Nothing to move to rear. The queue is empty." << endl;;
        return;
        return;
    }
    int temp = front();
    pop();
    push(temp);
}

const int Queue::front() const {
    /*
    Returns the data value at the front of the queue.
    */
    return front_of_queue->data;
}

size_t Queue::size() {
    /*
    Returns the size of the queue.
    */
    return num_items;
}

void Queue::print()
{
    /*
    Prints, in order, the data values of the queue.
    */
    if (!is_empty())
    {
        for (temp = front_of_queue; temp != NULL; temp = temp->next)
            cout << temp->data << " ";
        cout << endl;
    }
    else
    {
        cout << "Queue is Empty!" << endl;
    }
}

bool Queue::is_empty()
{
    /*
    Returns a boolean value indicating if the queue is empty(true) or not(false).
    */
    return (front_of_queue == NULL);
}
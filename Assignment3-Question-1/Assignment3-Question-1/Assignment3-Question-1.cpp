#include<iostream>
#include "queue.h"

using namespace std;

int main()
{   
    /*
        Adds three items the the queue and prints the queue order
        Moves the front items the rear
        Prints the new order of the queue.
    */
    Queue q;
    q.push(3);
    q.push(7);
    q.push(11);
    cout << "Before 'move_to_rear()' called:" << endl;
    q.print();
    q.move_to_rear();
    cout << "After 'move_to_rear()' called:" << endl;
    q.print();
}

#include <bits/stdc++.h>
using namespace std;

class QueueNode
{
public:
    int val;
    QueueNode *next;
    QueueNode(int data)
    {
        val = data;
        next = NULL;
    }
};
QueueNode *front = NULL, *rear = NULL;
class Queue
{
public:
    int size = 0;
    bool isEmpty();
    void enqueue(int x);
    void dequeue();
    int peek();
};
bool Queue::isEmpty()
{
    return front == NULL;
}
int Queue::peek()
{
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    return front->val;
}
void Queue::enqueue(int x)
{
    QueueNode *temp;
    temp = new QueueNode(x);
    if (temp == NULL)
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
        size++;
    }
}
void Queue::dequeue()
{
    if (front == NULL)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << front->val << " Removed From Queue" << endl;
        QueueNode *temp = front;
        front = front->next;
        delete temp;
        size--;
    }
}
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "The size of the Queue is " << q.size << endl;
    cout << "The Peek element of the Queue is " << q.peek() << endl;
}
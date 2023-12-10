#include <iostream>
using namespace std;

class Queue
{
    int size;
    int *arr;
    int front;
    int rear, currSize;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 100;
        arr = new int[size];
        currSize = 0
    }
    void push(int x)
    {
        if (currSize == maxSize)
        {
            cout << "Queue is full\nExiting..." << endl;
            exit(1);
        }
        if (rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
        currSize++;
    }
    int pop()
    {
        if (front == -1)
        {
            cout << "Queue Empty\nExiting..." << endl;
        }
        int elem = arr[front];
        if (currSize == 1)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        currSize--;
        return elem;
    }
    void top()
    {
        if (front == -1)
            cout << "Queue is Empty" << endl;
        else
            cout << arr[front] << endl;
    }
    void sizeQueue()
    {
        cout << currSize << endl;
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

} Q;
int main()
{
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.sizeQueue();
    Q.display();
    Q.pop();
    Q.sizeQueue();
    Q.display();
    Q.top();
}
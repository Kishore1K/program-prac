#include <iostream>
using namespace std;

struct StackNode
{
    int data;
    StackNode *next;
    int size;

    StackNode(int d)
    {
        data = d;
        next = NULL;
    }
};

struct stack
{
    StackNode *top;
    int size;
    stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int x)
    {
        StackNode *newElem = new StackNode(x);
        newElem->next = top;
        top = newElem;
        size++;
    }
    int pop()
    {
        if (top == NULL)
        {
            return -1;
        }
        int elem = top->data;
        StackNode *temp = top;
        top = top->next;
        delete temp;
        size--;
        return elem;
    }
    int Size()
    {
        return size;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
    int peek()
    {
        if (top == NULL)
            return -1;
        return top->data;
    }
    void print()
    {
        StackNode *curr = top;
        while (curr != NULL)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
} s;

int main()
{
    s.push(10);
    cout << "Element popped: " << s.pop() << "\n";
    cout << "Stack size: " << s.Size() << "\n";
    cout << "Stack empty or not? " << s.isEmpty() << "\n";
    cout << "stack's top element: " << s.peek() << "\n";
    return 0;
}
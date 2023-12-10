#include <iostream>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack()
    {
        top = -1;
        size = 100;
        arr = new int[size];
    }

    void push(int x)
    {
        if (top == size)
        {
            cout << "OverFlow" << endl;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "UnderFlow" << endl;
            return -1;
        }
        int elem = arr[top];
        top--;
        return elem;
    }
    void topElem()
    {
        cout << arr[top] << endl;
    }
    void sizeElem()
    {
        cout << top + 1 << endl;
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
} S;
int main()
{
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.display();
    S.pop();
    S.display();
    S.topElem();
    S.sizeElem();
}
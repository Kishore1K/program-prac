#include <iostream>
using namespace std;

class Calculator
{
    int len, breath;

public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    float add(float a, float b, float c)
    {
        return a + b + c;
    }

    Calculator(int a, int b)
    {
        len = a;
        breath = b;
    }
    void operator++()
    {
        len += 2;
        breath += 10;
    }
    void display()
    {
        cout << len << breath << endl;
    }
};
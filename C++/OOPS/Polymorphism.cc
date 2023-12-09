#include <iostream>
using namespace std;
class A //  base class declaration.
{
    int a;

public:
    void display()
    {
        cout << "Class A ";
    }
};
class B : public A //  derived class declaration.
{
    int b;

public:
    void display()
    {
        cout << "Class B";
    }
};
class Cal
{
    int num = 0;

public:
    static int add(int a, int b)
    {
        return a + b;
    }
    static int add(int a, int b, int c)
    {
        return a + b + c;
    }
    void Print()
    {
        cout << "The Count is: " << num << endl;
    }
    void operator++()
    {
        num = num + 2;
    }
};
int main(void)
{
    Cal C; //     class object declaration.
    cout << C.add(10, 20) << endl;
    cout << C.add(12, 20, 23);
    ++C;
    C.Print();
    return 0;
}

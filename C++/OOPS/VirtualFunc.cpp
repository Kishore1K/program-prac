#include <iostream>
using namespace std;
class A
{
    int x = 5;

public:
    virtual void display()
    {
        std::cout << "Value of x is : " << x << std::endl;
    }
};
class B : public A
{
    int y = 10;

public:
    void display()
    {
        std::cout << "Value of y is : " << y << std::endl;
    }
};
class Base
{
public:
    virtual void show() = 0;
};
class Derived : public Base
{
public:
    void show()
    {
        std::cout << "Derived class is derived from the base class." << std::endl;
    }
};
int main()
{
    Base *bptr;
    // Base b;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    float salary = 6000;
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};

class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};
class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "Weeping...";
    }
};
class A
{
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A
{
public:
    void display()
    {
        int result = mul();
        std::cout << "Multiplication of a and b is : " << result << std::endl;
    }
};

class M1
{
protected:
    int a;

public:
    void get_a(int n)
    {
        a = n;
    }
    void display()
    {
        cout << "Class A" << endl;
    }
};
class M2
{
protected:
    int b;

public:
    void get_b(int n)
    {
        b = n;
    }
    void display()
    {
        cout << "Class B" << endl;
    }
};
class M3 : public M1, public M2
{
public:
    // void display()
    // {
    //     std::cout << "The value of a is : " << a << std::endl;
    //     std::cout << "The value of b is : " << b << std::endl;
    //     cout << "Addition of a and b is : " << a + b;
    // }
    void view()
    {
        M2::display();
    }
};
class Shape // Declaration of base class.
{
public:
    int a;
    int b;
    void get_data(int n, int m)
    {
        a = n;
        b = m;
    }
};
class Rectangle : public Shape // inheriting Shape class
{
public:
    int rect_area()
    {
        int result = a * b;
        return result;
    }
};
class Triangle : public Shape // inheriting Shape class
{
public:
    int triangle_area()
    {
        float result = 0.5 * a * b;
        return result;
    }
};
// int main()
// {
// Programmer p1;
// cout << "Salary: " << p1.salary << endl;
// cout << "Bonus: " << p1.bonus << endl;

// BabyDog d1;
// d1.eat();
// d1.bark();
// d1.weep();

// B b;
// b.display();

//     M3 m;
//     m.view();
// }
int main()
{
    Rectangle r;
    Triangle t;
    int length, breadth, base, height;
    std::cout << "Enter the length and breadth of a rectangle: " << std::endl;
    cin >> length >> breadth;
    r.get_data(length, breadth);
    int m = r.rect_area();
    std::cout << "Area of the rectangle is : " << m << std::endl;
    std::cout << "Enter the base and height of the triangle: " << std::endl;
    cin >> base >> height;
    t.get_data(base, height);
    float n = t.triangle_area();
    std::cout << "Area of the triangle is : " << n << std::endl;
    return 0;
}
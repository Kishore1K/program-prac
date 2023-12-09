#include <iostream>
#include <string>
using namespace std;
enum week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct Student
{
    string name;
    int id;

    Student(int id, string name)
    {
        this->name = name;
        this->id = id;
    }

    void display()
    {
        cout << name << " id : " << id << endl;
    }
};
class EmployeeB;
class Employee
{
private:
    string name;

public:
    int id;
    static int count;
    friend string printName(Employee, EmployeeB);
    Employee()
    {
        cout << "Default " << endl;
    }
    Employee(int id)
    {
        this->id = id;
        count += 1;
    }
    Employee(Employee &e1)
    {
        cout << "Copy Constructor" << endl;
        this->id = e1.id;
    }

    void display()
    {
        cout << id << count << endl;
    }

    ~Employee()
    {
        cout << "Destructor" << endl;
    }
};
class EmployeeB
{
    string name;

public:
    EmployeeB(string name)
    {
        this->name = name;
    }
    friend string printName(Employee, EmployeeB);
};
int Employee::count = 0;
string printName(Employee e, EmployeeB e1)
{
    e.name = "ABI";
    cout << "E1 : " << e.name << " E2: " << e1.name << endl;
    return e.name;
}
int main()
{
    // Employee e1(10);
    // Employee e2(10);
    // Employee e3 = Employee(e1);
    // // e1.display();
    // // e2.display();
    // cout << Employee::count << endl;
    string name;
    // struct Student s1;
    // s1.id = 1;
    // s1.name = "Kishore";

    struct Student s2 = Student(1, "Kishore K");
    s2.display();

    week day;
    day = Friday;
    cout << day + 1 << endl;
    // cout << sizeof(s1) << "   " << sizeof(name) << endl;
    // cout << s1.name << " id : " << s1.id << endl;

    Employee e;
    EmployeeB e1("KISHORE");
    cout << printName(e, e1) << endl;
}
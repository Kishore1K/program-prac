#include <iostream>
using namespace std;
class Mom
{
public:
    void display()
    {
        cout << "Class Mom" << endl;
    }
};
class Dad
{
public:
    void display()
    {
        cout << "Class DAD" << endl;
    }
};
class Child : public Mom, public Dad
{
public:
    void display()
    {
        cout << "Class Child" << endl;
    }
};

int main()
{
    Child ch;
    ch.display();
    ch.Mom::display();
    ch.Dad::display();
}
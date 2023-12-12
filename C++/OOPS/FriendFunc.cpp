#include <iostream>
using namespace std;

class Animal
{
    int age;
    int weight;

public:
    static int count;
    Animal()
    {

        age = 25;
        weight = 70;
        count++;
    }
    friend void setVal(Animal);
    friend class Dog;
};
int Animal::count = 0;
void setVal(Animal a)
{
    a.age = 30;
    a.weight = 100;
}
class Dog
{
public:
    void display(Animal &a)
    {
        cout << "Age"
             << " : " << a.age << endl;
        cout << "Weight"
             << " : " << a.weight << endl;
    }
};
int main()
{
    Animal A;
    Dog D;
    setVal(A);
    D.display(A);
    cout << Animal::count << endl;
    return 0;
}
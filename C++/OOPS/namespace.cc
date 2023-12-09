#include <iostream>
using namespace std;
namespace First
{
    void hi()
    {
        cout << "Hi" << endl;
    }
}
namespace Second
{
    void sayHello()
    {
        cout << "Hello Second Namespace" << endl;
    }
}
using namespace First;
int main()
{
    // First::hi();
    hi();
    Second::sayHello();
    return 0;
}
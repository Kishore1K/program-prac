#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception
{
public:
    const char *what() const throw()
    {
        return "Attempted Zero division\n";
    }
} exc;
int main()
{
    int x, y;
    try
    {
        cout << "Enter the two Numbers" << endl;
        cin >> x >> y;
        if (y == 0)
        {
            MyException e;
            throw e;
        }
        else
        {
            cout << "x / y = " << x / y << endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
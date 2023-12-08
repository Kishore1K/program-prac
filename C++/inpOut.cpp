#include <bits/stdc++.h>
using namespace std;
// Call by value
void doSomething(int num)
{
    num += 5;
    cout << num << endl;
}
// call by ref
void doSomRef(int &num)
{
    num += 10;
    cout << num << endl;
}

void doArray(int arr[])
{
    arr[0] += 10;
    cout << arr[0] << endl;
}
int main()
{
    int a = 12;
    float b = 1.0;
    char c = 'K';
    double d = 123.343;
    long l = 2367352;
    string name = "Kishore";
    if (a == 1)
    {
        cout << "Hi" << endl;
    }
    else if (a > 10 && a < 20)
    {
        cout << "Hello" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }
    cout << a << b << c << d << l << name << endl;
    int ch = 3;
    switch (ch)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "Wed";
        break;
    case 4:
        cout << "Thr";
        break;
    default:
        cout << "Enter the correct option";
    }

    // Arrays
    int nums[5] = {100, 2, 4, 3, 6};
    for (int i = 0; i < 5; i++)
    {
        cout << nums[i] << endl;
    }
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        i++;
    }
    i = 3;
    do
    {
        cout << "Do while Loop" << endl;
        cout << i << endl;
        i++;
    } while (i < 5);

    // Passing arg using value
    int ab = 5;
    doSomething(ab);
    cout << ab << endl;

    doSomRef(ab);
    cout << ab << endl;

    // Always arrays pass by reference only
    doArray(nums);
    for (int n : nums)
    {
        cout << n << endl;
    }
    return 0;
}

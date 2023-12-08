#include <bits/stdc++.h>
using namespace std;
void printName(int n)
{
    if (n <= 0)
        return;
    printf("Kishore\n");
    printName(n - 1);
}
void printNum(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printNum(i + 1, n);
}
void revPrintNum(int i, int n)
{
    if (i > n)
        return;
    revPrintNum(i + 1, n);
    cout << i << endl;
}
int sumNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumNum(n - 1);
}
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
void reverseArray(int l, int r, int arr[])
{
    if (l < r)
    {
        swap(arr[l], arr[r]);
        reverseArray(l + 1, r - 1, arr);
    }
}
bool isPalindrome(int i, string &s)
{

    if (i >= s.length() / 2)
        return true;
    if (s[i] != s[s.length() - i - 1])
    {
        return false;
    }
    return isPalindrome(i + 1, s);
}
int fibonacciNum(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacciNum(n - 1) + fibonacciNum(n - 2);
}
int main()
{
    // printName(5);
    // printNum(1, 5);
    // revPrintNum(0, 5);
    // cout << sumNum(5) << endl;
    // cout << factorial(5) << endl;
    string s = "MADAM";
    cout << isPalindrome(0, s) << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverseArray(0, n - 1, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << fibonacciNum(10) << endl;
}
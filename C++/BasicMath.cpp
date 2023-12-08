#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int reverseNum(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
int gcdNum(int a, int b)
{
    int ans;
    // or if(b==0) return a; gcd(b, a%b);
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
bool isArmstrong(int num)
{
    int temp = num;
    int count = 0, amg = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        amg += pow(rem, count);
        temp /= 10;
    }
    return amg == num;
}
void divisors(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
bool isPrime(int num)
{
    if (num < 1)
    {
        return false;
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << countDigits(1021) << endl;
    cout << reverseNum(102) << endl;
    cout << gcdNum(4, 8) << endl;
    cout << isArmstrong(153) << endl;
    divisors(36);
    cout << isPrime(8) << endl;
    return 0;
}

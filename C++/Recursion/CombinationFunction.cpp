#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}
int NCR(int n, int r)
{
    if (n == 1 || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main(int argc, char const *argv[])
{
    printf("%d \n", NCR(5, 3));
    return 0;
}

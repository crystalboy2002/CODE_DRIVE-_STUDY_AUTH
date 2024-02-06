#include <iostream>

using namespace std;
int fact(int n);
int tral(int n);

int main()
{
    int num = 10;
    int n = tral(num);
    cout << n;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int tral(int n)
{
    int fac = fact(n);
    int res = 0;
    while (fac % 10 == 0)
    {
        res++;
        fac = fac / 10;
    }
    return res;
}
#include <iostream>

using namespace std;
int fact(int n);

int main()
{
    int num = 5;
    int n = fact(num);
    cout << n;
}

/*
void fact(int n)
{
    int res = 1;
    while (n != 0)
    {
        res *= n;
        n--;
    }
    cout << res;
}
*/

/*
void fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    cout << res;
}
*/

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
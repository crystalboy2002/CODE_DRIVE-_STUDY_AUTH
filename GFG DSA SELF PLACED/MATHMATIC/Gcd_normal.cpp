#include <iostream>

using namespace std;
int gcd(int a, int b);

int main()
{
    int a = 4, b = 6;
    int res = gcd(a, b);
    cout << res;
}
/*
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

*/

/*
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return gcd(b, a % b);
}

*/

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
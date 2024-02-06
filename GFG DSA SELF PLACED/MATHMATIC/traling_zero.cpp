#include <iostream>

using namespace std;
int tral(int n);

int main()
{
    int num = 5;
    int n = tral(num);
    cout << n;
}

int tral(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }
    return res;
}
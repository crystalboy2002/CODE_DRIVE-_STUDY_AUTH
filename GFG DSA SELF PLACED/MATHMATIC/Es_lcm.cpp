#include <iostream>
#include <algorithm>

using namespace std;

int Lcm(int a, int b);

int main()
{
    int a = 4, b = 6;
    int res = Lcm(a, b);
    cout << res;
}
int Lcm(int a, int b)
{
    int gcd = __gcd(a, b);
    return (a * b) / (gcd);
}
#include <iostream>

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
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
}
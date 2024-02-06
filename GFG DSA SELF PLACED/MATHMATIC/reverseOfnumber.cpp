// this code is effecent
#include <iostream>

using namespace std;
bool palindrom(int n);

int main()
{
    int n = 0;
    cout << palindrom(n);
}
bool palindrom(int n)
{
    if (n < 0)
    {
        return false;
    }
    else
    {

        int rev = 0;
        int num = n;
        while (num != 0)
        {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        if (rev == n)
        {
            return true;
        }
        else
            return false;
    }
}
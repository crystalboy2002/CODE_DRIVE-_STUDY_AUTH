// this code is effecent time complexity is O(1)
#include <iostream>
#include <cmath>

using namespace std;
int CountNum(int n);

int main()
{
    int num = 10;
    int ans = CountNum(num);
    cout << "the total no of digits is : " << ans;
}

int CountNum(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return floor(log10(abs(n))) + 1;
}
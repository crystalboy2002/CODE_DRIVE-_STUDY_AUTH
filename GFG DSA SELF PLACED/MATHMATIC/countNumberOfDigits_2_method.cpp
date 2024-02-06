// this code is not effecent time complexity is O(d) and extra stack space
#include <iostream>

using namespace std;
int CountNum(int n);

int main()
{
    int num = 329;
    int ans = CountNum(num);
    cout << "the total no of digits is : " << ans;
}

int CountNum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + CountNum(n / 10);
}

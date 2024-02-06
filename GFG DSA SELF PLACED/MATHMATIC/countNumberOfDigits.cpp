// this code is not effecent time complexity is O(d)
#include <iostream>

using namespace std;
void CountNum(int n);

int main()
{
    int num = 0;
    CountNum(num);
}

void CountNum(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    cout << "the total no of digits is : " << count;
}
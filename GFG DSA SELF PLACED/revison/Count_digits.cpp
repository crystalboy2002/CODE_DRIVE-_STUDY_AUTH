#include <iostream>

using namespace std;
struct count_num
{
    count_num(int n)
    {
        if (n < 0)
        {
            n = n * -1;
        }
        int count = 0;
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
        cout << count << endl;
    }
};
int main()
{
    struct count_num n1(100);
    return 0;
}
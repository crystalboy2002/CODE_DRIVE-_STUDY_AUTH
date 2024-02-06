#include <iostream>

using namespace std;
int fun(int n)
{
    if (n == 0)
        return 0;
    else
        return 1 + fun(n / 10);
};
int main()
{
    cout << fun(212) << endl;
    return 0;
}
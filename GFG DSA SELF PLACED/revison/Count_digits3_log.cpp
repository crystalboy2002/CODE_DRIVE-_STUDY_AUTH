#include <iostream>
#include <cmath>
using namespace std;
int count(int n)
{
    return floor(log10(n) + 1);
}
int main()
{
    cout << count(212);
    return 0;
}
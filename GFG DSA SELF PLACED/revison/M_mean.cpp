#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    sum = accumulate(arr, arr + 9, sum);
    cout << "mean is :" << sum / 9 << endl;

    return 0;
}
#include <iostream>

using namespace std;

void rev(int arr[], int size);
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    rev(arr, size);

    for (auto x : arr) // this loop prints value wise not index;
    {
        cout << x << " ";
    }
    return 0;
}

void rev(int arr[], int size)
{
    int lo = 0;
    int hi = size - 1;
    while (lo < hi)
    {
        int temp = arr[lo];
        arr[lo] = arr[hi];
        arr[hi] = temp;
        lo++;
        hi--;
        // cout << "lo " << arr[lo] << " hi " << arr[hi] << endl;
    }
}
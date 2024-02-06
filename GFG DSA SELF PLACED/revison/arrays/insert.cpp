#include <iostream>

using namespace std;
int insert(int arr[], int size, int cap, int pos, int val)
{
    if (size == cap)
        return -1;

    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    return ++size;
}
int delet(int arr[], int size, int pos)
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return --size;
};
int main()
{
    int cap = 10;
    int arr[cap] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int size = 8;
    // size = insert(arr, size, cap, 3, 20);
    size = delet(arr, size, 3);
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }

    return 0;
}
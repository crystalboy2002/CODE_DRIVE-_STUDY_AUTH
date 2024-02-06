#include <iostream>

using namespace std;

int main()
{
    int arr[] = {20, 5, 7, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 7;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << i;
            return 0;
        }
    }
    return -1;
}
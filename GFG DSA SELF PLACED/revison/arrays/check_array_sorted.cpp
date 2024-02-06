#include <iostream>

using namespace std;
string check(int arr[], int size);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "is array sorted : " << check(arr, size);
}

string check(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return "false";
        }
    }
    return "true";
}
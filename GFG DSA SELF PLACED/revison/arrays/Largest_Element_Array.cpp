#include <iostream>

using namespace std;
void largest(int arr[], int size);
void Slargest(int arr[], int size);

int main()
{

    int cap = 10;
    int arr[cap] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // largest(arr, size);
    Slargest(arr, size);
}

void largest(int arr[], int size)
{
    int large = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << large;
}
void Slargest(int arr[], int size)
{
    int Slage = -1;
    int large = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[large])
        {
            Slage = large;
            large = i;
        }
        else if (arr[large] != arr[i])
        {
            if (Slage == -1 || arr[i] > Slage)
            {
                Slage = i;
            }
        }
    }
    if (Slage == -1)//this for duplicate case (sol not exist)
    {
        cout <<  -1;
    }

    cout << arr[large] << endl;

    cout << arr[Slage] << endl;
}
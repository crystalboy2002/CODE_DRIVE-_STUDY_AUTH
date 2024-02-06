#include <iostream>

using namespace std;

int main()
{

    int number = 121;
    int rev = 0;
    int num = number;
    while (number > 0)
    {
        rev = rev * 10 + (number % 10);
        number = number / 10;
    }
    if (num == rev)
    {
        cout << "palindrome" << endl;
    }
    else
        cout << "not palindrome" << endl;

    return 0;
}
/*Direct Address Table is a data structure that has the capability of mapping records to their corresponding keys using arrays. In direct address tables, records are placed using their key values directly as indexes. They facilitate fast searching, insertion and deletion operations.

We can understand the concept using the following example. We create an array of size equal to maximum value plus one (assuming 0 based index) and then use values as indexes. For example, in the following diagram key 21 is used directly as index. */
#include <iostream>

using namespace std;

int main()
{

    bool arr[1000];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = 0;
    }
    bool cont = true;
    do
    {
        cout << "enter the operation 1 for search 2 insert 3 delete" << endl;
        int oper;
        cin >> oper;
        if (oper == 1)
        {
            int key;
            cout << "enter key for search :";
            cin >> key;
            if (arr[key] == 0)
            {
                cout << "value is not present\n";
            }
            else
                cout << "value is present\n";
        }
        if (oper == 2)
        {
            int key;
            cout << "enter key for insert :";
            cin >> key;
            arr[key] = 1;
            cout << "key is inserted\n";
        }
        if (oper == 3)
        {
            int key;
            cout << "enter key for delete :";
            cin >> key;
            arr[key] = 0;
            cout << "key is deleted\n";
        }
        string ch;
        cout << "do you want to continue : yes/no";
        cin >> ch;
        if (ch == "no")
        {
            cont = false;
        }

    } while (cont);
    return 0;
}
/* Advantages:

    Searching in O(1) Time: Direct address tables use arrays which are random access data structure, so, the key values (which are also the index of the array) can be easily used to search the records in O(1) time.
    Insertion in O(1) Time: We can easily insert an element in an array in O(1) time. The same thing follows in a direct address table also.
    Deletion in O(1) Time: Deletion of an element takes O(1) time in an array. Similarly, to delete an element in a direct address table we need O(1) time.

Limitations:

    Prior knowledge of maximum key value
    Practically useful only if the maximum value is very less.
    It causes wastage of memory space if there is a significant difference between total records and maximum value.
*/
#include <iostream>
#include <list>

using namespace std;
struct myhast
{
    int bucket;
    list<int> *table;
    myhast(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
            else
                return false;
        }
    }
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
};
int main()
{
    // Create a hash table with 10 buckets
    myhast ht(10);

    // Insert some keys
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);

    // Search for a key
    cout << "Searching for key 20: ";
    if (ht.search(20))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}
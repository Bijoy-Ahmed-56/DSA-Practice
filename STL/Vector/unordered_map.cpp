// Key not sorted
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    /*
    unordered_map<int, int> freq;

    freq[10] = 3;
    freq[20] = 5;
    freq[30] = 2;

    cout << freq[20];
    */

    int arr[] = {5, 2, 5, 1, 2, 5, 3};
    unordered_map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }
    for (auto item : freq)
    {
        cout << item.first << " ---> " << item.second << endl;
    }
    for (auto item : freq)
    {
        if (item.second == 1)
        {
            cout << item.first << " ---> " << item.second << endl;
        }
    }
}
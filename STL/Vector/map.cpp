// sorted by key value
#include <iostream>
#include <map>
using namespace std;
int main()
{
    /*
    map <int, int> mp;
    // mp[1,6]; // not valid
    mp[10] = 3;
    mp[20] = 2;
    mp[30] = 5;

    cout << mp[10] << endl;
    cout << mp[20] << endl;
    */

    // int arr[] = {2, 1, 2, 3, 1, 2};
    // map<int, int> mp;

    // for (int x : arr)
    //{
    //     mp[x]++;
    // }

    int arr[] = {4, 2, 4, 1, 2, 4, 3};
    map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }
    for (auto item : freq)
    {
        cout << item.first << "----> " << item.second << endl;
    }
    for (auto item : freq)
    {
        if (item.second > 1)
        {
            cout << item.first << " ";
        }
    }
    cout<<freq.size();  // Total number of key
    return 0;
}
// Frequency Counting with Hashing
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {4, 8, 6, 7, 4, 8};
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    for (auto item : freq)
    {
        cout << item.first << " occurs " << item.second << " times" << endl;
    }
    return 0;
}
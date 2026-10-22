// Find All Elements That Appear More Than n/3 Times
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 2, 1, 2, 2};
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    int limit = arr.size() / 3;

    for (auto item : freq)
    {
        if (item.second > limit)
        {
            cout << item.first << " ";
        }
    }

    return 0;
}

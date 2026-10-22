// Find the Most Frequent Element
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {2, 5, 2, 3, 5, 2, 4, 5, 5};
    unordered_map<int, int> freq;

    int max_freq = 0;
    int max_element = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    for (auto item : freq)
    {
        cout << item.first << "  ---->  " << item.second << endl;
        if (item.second > max_freq)
        {
            max_freq = item.second;
            max_element = item.first;
        }
    }

    cout << max_element << " occurs " << max_freq << " times" << endl;

    return 0;
}
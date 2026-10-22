// First Repeating Element
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {5, 3, 4, 3, 5, 2};
    unordered_map<int, int> freq;

    // Step 1: Count frequency
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    // Step 2: Find the first repeating element
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq[arr[i]] > 1)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
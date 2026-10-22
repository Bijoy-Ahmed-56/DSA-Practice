// First Non-Repeating Element
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
        if (freq[arr[i]] == 1)
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
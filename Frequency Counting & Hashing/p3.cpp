// Check Whether Two Arrays Are Equal
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 2};
    vector<int> arr2 = {2, 2, 1};
    unordered_map<int, int> freq;

    if (arr1.size() != arr2.size())
    {
        cout << "not equal" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < arr1.size(); i++)
        {
            freq[arr1[i]]++;
            freq[arr2[i]]--;
        }
        bool equal = true;
        for (auto item : freq)
        {
            if (item.second != 0)
            {
                cout << "not equal" << endl;
                equal = false;
                break;
            }
        }
        if (equal)
        {
            cout << "equal" << endl;
        }
    }

    return 0;
}
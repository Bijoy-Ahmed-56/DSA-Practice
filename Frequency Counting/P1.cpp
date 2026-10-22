#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {4, 2, 2, 3, 4, 1};
    // int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        bool already_seen = false;
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                already_seen = true;
                break;
            }
        }
        if (already_seen)
        {
            continue;
        }
        // bool seen = false;
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                // seen = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times " << endl;
    }

    return 0;
}
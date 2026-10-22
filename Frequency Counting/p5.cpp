// Count Distinct Elements
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {2, 3, 4, 8, 7, 4};
    unordered_map<int, int> dis;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        dis[arr[i]]++;
        if (dis[arr[i]] == 1)
        {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << "\nTotal distinct number: " << count << endl;

    return 0;
}
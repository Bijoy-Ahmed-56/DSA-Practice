#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 2, 4, 2, 3, 3, 3, 5};
    unordered_map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }

    priority_queue<pair<int, int>> pq;
    for (auto x : freq)
    {
        pq.push({x.second, x.first});
    }

    // int k = 2;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << pq.top().second << " ---> " << pq.top().first << endl;
    //     pq.pop();
    // }

    cout << "Enter place number : " << endl;
    int k;
    if (!(cin >> k) || k > pq.size())
    {
        cout << "Input place number " << endl;
        return 0;
    }
    for (int i = 1; i < k; i++)
    {

        pq.pop();
    }
    cout << pq.top().second << endl;

    return 0;
}
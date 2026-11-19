#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{

    int arr[] = {4, 4, 1, 2, 2, 2, 3, 3, 5};
    unordered_map<int, int> freq;
    for (auto x : arr)
    {
        freq[x]++;
    }

    // priority_queue<pair<int, int>> pq;
    // for (auto x : freq)
    // {
    //     pq.push({x.second, x.first});
    // }

    // // for (int i = 0; i < pq.size(); i++)
    // // {
    // //
    // // }

    // while (!(pq.empty()))
    // {
    //     cout << pq.top().second << " ";
    //     pq.pop();
    // }

    // if we want to print same frequency small number first
    // We have to use comparator
    struct compare
    {
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            if (a.first == b.first)
            {
                return a.second > b.second;
            }
            return a.first < b.first;
        }
    };
    // if we use custom operator we have to write like this 
    priority_queue<pair<int, int>, vector<pair<int,int>>, compare> pq;
    for (auto x : freq)
    {
        pq.push({x.second, x.first});
    }

    while (!(pq.empty()))
    {
        cout << pq.top().second << " ";
        pq.pop();
    }

    return 0;
}
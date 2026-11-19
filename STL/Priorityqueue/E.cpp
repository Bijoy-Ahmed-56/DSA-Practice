#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main()
{
    //  n = 6
    int arr[] = {10, 50, 20, 40, 30, 60};
    int k = 3;

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto x : arr)
    {
        pq.push(x);
    }

    for (int i = 0; i < k; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
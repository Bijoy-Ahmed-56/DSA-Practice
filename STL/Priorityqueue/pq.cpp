#include <iostream>
// #include <priorityque>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    // max heap ---> priority_queue<int> pq;
    // min heap ---> priority_queue<int , vector<int>, greater<int>> pq;

    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<int>> pq;

    // pq.push(10);
    // pq.push(50);
    // pq.push(20);
    // pq.push(40);
    // pq.push(30);

    int y;
    cout << "Enter queue size : " << endl;
    // cin >> y;
    if (!(cin >> y) || y <= 0)
    {
        cout << "invalid queue size : " << endl;
        return 0;
    }
    // int n ;
    for (int i = 0; i < y; i++)
    {
        cout << "enter " << i + 1 << " number " << endl;
        int n;
        // cin >> n;
        if (!(cin >> n))
        {
            cout << "Invalid number";
            return 0;
        }
        pq.push(n);
    }

    int k;
    cout << "Enter place number : " << endl;
    // cin >> k;
    if (!(cin >> k) || k < 1 || k > y)
    {
        cout << "invalid place numebr  ";
        return 0;
    }
    for (int i = 1; i < k; i++)
    {
        pq.pop();
    }
    cout << pq.top();

    /*
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    */

    return 0;
}
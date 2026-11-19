#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    // queue<int> q = {10, 20, 30, 40, 50, 60}; // Wrong syntex
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    /*
    for (int i = 0; i < 3 && !q.empty(); i++)
    {
        q.pop();
    }

    */

    // queue<int> temp = q;

    /*
    int count = 0;
    while (!temp.empty())
    {
        // cout << q.front() << " ";
        temp.pop();
        count++;
    }
    cout << count << endl;

    */

    //  k element reverse
    // queue<int> temp = q;
    int k = 3;
    stack<int> s;
    for (int i = 0; i < k && !(q.empty()); i++)
    {
        s.push(q.front());
        q.pop();
    }
    queue<int> temp = q;
    while (!q.empty())
    {
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (!temp.empty())
    {
        q.push(temp.front());
        temp.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    queue<int> temp1;
    queue<int> temp2;

    while (!q.empty())
    {
        if (q.front() % 2 == 0)
        {
            temp1.push(q.front());
            q.pop();
        }
        else
        {
            temp2.push(q.front());
            q.pop();
        }
    }

    while (!temp2.empty())
    {
        q.push(temp2.front());
        temp2.pop();
    }

    while (!temp1.empty())
    {
        q.push(temp1.front());
        temp1.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
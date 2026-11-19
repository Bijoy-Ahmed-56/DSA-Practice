#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    // firt in firt out
    queue<int> q;
    stack<int> s;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << q.front() << endl; // 10
    cout << q.back() << endl;  // 40
    q.pop();                   // front remove
    cout << q.front() << endl; // 20

    /*
    while (!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }

    */

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
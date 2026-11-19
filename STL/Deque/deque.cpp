// Double Ended Queue
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> dq;
    /*
    dp.push_back(10);
    dp.push_back(20);
    dp.push_front(5);
    dp.push_front(1);
    */

    int x;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " element ";
        cin >> x;
        dq.push_back(x);
    }

    dq.push_front(100);

    /*

    while (!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

    */

    /*
    // We can eccess every element no need to delete dq like queue
    // also can use vector , list , array
    // dq is iterable container
    for (int x : dq)
    {
        cout << x << " ";
    }
    */

    // cout << dq.front() << endl;
    // cout << dq.back() << endl;
    // cout << dq.size() << endl;
    // cout << (dq.front() + dq.back());

    for (int i = (dq.size() - 1); i >= 0; i--)
    {
        cout << dq[i] << " ";
    }

    return 0;
}
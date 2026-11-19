#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    string s = "Bijoy";
    stack<char> st;
    for (auto x : s)
    {
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
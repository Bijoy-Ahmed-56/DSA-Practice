#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;

    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (st.empty())
            {
                return false;
            }

            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '['))
            {
                return false;
            }

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cout << "Enter brackets: ";
    cin >> s;

    if (isBalanced(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }

    return 0;
}
// stack --- last in first out
// main operation push pop and top

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    /*

        st.push(10);
        st.push(20);
        st.push(30);

        cout << st.top() << endl; // 30

        st.pop();

        cout << st.top() << endl; // 20
        cout << st.size() << endl;  // 2
    */

    /*
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();
    st.pop();

    cout << st.top() << endl;  // 20
    cout << st.size() << endl; // 2
    */

    cout<<st.empty(); // true 1  

    return 0;
}
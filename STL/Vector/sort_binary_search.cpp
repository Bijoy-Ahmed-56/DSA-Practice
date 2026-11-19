#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {40, 25, 10, 50, 20, 30};
    /*
    sort(v.begin(), v.end()); // asc order
    // cout << "{";
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    // cout << "}";
    cout << endl;
    cout << binary_search(v.begin(), v.end(), 25);

    */

    sort(v.begin(), v.end(), greater<int>());
    // cout << "{";
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    cout << binary_search(v.begin(), v.end(), 25, greater<int>());
    return 0;
}
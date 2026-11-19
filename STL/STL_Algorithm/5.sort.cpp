#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // Ascending Order
    vector<int> v = {50, 10, 40, 20, 30};
    sort(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    // Descending Order
    // sort(v.begin(), v.end(), greater<int>());
    return 0;
}
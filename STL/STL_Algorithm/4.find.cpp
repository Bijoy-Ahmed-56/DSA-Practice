#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    auto it = find(v.begin() + 3, v.end(), 20);

    if (it == v.end())
        cout << "Not Found";
    else
        cout << *it;
    return 0;
}
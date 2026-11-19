#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};

    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v.size() << endl;

    // element add o remove //
    // v.push_back(40); // add  last elelment
    // v.pop_back();    // delete last element

    v.push_back(8);
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nsize " << v.size() << endl;

    // Vector Operations
    cout << v[0] << endl;
    cout << v[1] << endl;
    return 0;
}
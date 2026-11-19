#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    // This a pair
    vector<pair<int, int>> v = {{2, 4}, {6, 8}, {10, 12}};
    // cout << v[2] << endl; // error....
    cout << v[2].first << endl;  // output 10
    cout << v[2].second << endl; // output 12

    
    cout << v[2].first<< " " << v[2].second << endl;
    // output 10 12

    return 0;
}
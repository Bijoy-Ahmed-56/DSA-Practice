// No duplicate value
// sorted order (asc)
// value add and finding
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    /*
    set<int> s = {30, 10, 20, 10, 30};
    s.insert(40); // add value
    s.erase(40);  // remove value
    cout<<s.count(10)<<endl; // 1 means 10 exist
    cout<<s.count(50)<<endl; // 0 means 50 doesnot exists
    cout<<s.size()<<endl;    // 3 size of unique element

    for (int x : s)
    {
        cout << x << " "; // 10 20 30 --> no duplicate asc order
    }
    */

    vector<int> v = {5, 2, 5, 1, 2, 8, 1};
    set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << "\nNumber of unique value : " << s.size() << endl;
    if (s.count(30))
    {
        cout << "30 exists in this set  " << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    s.erase(30);
    s.erase(30);  

    if (s.find(40) != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}
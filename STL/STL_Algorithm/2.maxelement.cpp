#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {15, 40, 10, 90, 25, 70};

    auto it = max_element(arr, arr + 6);  // max_element iterator return kore

    cout << *it;  // maximum value 
    return 0;
}
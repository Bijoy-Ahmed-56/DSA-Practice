#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // Count use for frequency 
    int arr[] = {10, 20, 30, 20, 40, 20};

    int result = count(arr, arr + 6, 20);

    cout << result;
    return 0;
}
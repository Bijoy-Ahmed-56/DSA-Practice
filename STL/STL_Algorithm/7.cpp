#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b) {  // Custom operator

    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}

int main()
{
    vector<pair<string, int>> students = {
        {"Rahim", 75},
        {"Karim", 90},
        {"Bijoy", 85},
        {"Hasan", 60},
        {"Sakib", 95}};

    sort(students.begin(), students.end(), compare);

    for (auto s : students)
    {
        cout << s.first << " " << s.second << endl;
    }

    return 0;
}
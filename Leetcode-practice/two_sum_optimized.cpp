#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int first = nums.at(i);
            int second = target - first;
            if (m.find(second) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[second]);
                break;
            }
            m[first] = i;
        }
        return ans;
    }
};

int main()
{
    vector<int> nums;
    int size, element;
    cout << "Enter array size: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array element: " << endl;
        cin >> element;
        nums.push_back(element);
    }
    int target;
    cout << "\nenter target";
    cin >> target;
    Solution n;

    vector<int> result = n.twoSum(nums, target);
    if (result.size() == 2)
    {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}
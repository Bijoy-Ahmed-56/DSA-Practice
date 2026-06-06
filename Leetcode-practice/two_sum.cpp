#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
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
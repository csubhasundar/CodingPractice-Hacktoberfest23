#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {

            int dif = target - nums[i];
            if (mp.count(dif))
                return {i, mp[dif]};
            else
                mp[nums[i]] = i;
        }

        return {};
    }
};

int main()
{
    // Create an instance of the Solution class
    Solution solution;

    // Example usage:
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        cout << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}

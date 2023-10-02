PROBLEM : Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

 Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.

Approach: 
Method 1: Using Maps (Not Using Constant Space)
The task is to find an element in the array with a frequency of 1 while adhering to the constraints of linear time and constant space. The initial approach is to use a map to store the frequency of each element in the array.

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int, int> frequencyMap;
       for (auto x : nums)
           frequencyMap[x]++;
       for (auto z : frequencyMap)
           if (z.second == 1)
               return z.first;
       return -1;
    }
};
Time Complexity: O(N)
Space Complexity: O(N)
  
Method 2: Using Sorting (Using Constant Space)
Sorting the array simplifies the task as adjacent elements with the same value indicate a frequency of 2.

cpp
Copy code
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i += 2) {
            if (nums[i] != nums[i - 1])
                return nums[i - 1];
        }
        return nums[nums.size() - 1];
    }
};
Time Complexity: O(NlogN)
Space Complexity: O(1)
  
Method 3: Using Bitwise XOR Operator (Using Constant Space)
Leveraging the properties of the bitwise XOR operator, we can find the element with a frequency of 1.

cpp
Copy code
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans = 0;
       for (auto x : nums)
           ans ^= x;
       return ans;
    }
};
Time Complexity: O(N)
Space Complexity: O(1)

PROBLEM: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

 

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
 

Constraints:

1 <= nums.length <= 3 * 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

APPROACHES:
Approach 1:

set<int> ans; 
for (int i = 0; i < nums.size(); i++) {
    ans.insert(nums[i]);
}
int index = 0;
for (auto it : ans) { // n
    nums[index] = it;
    index++;
}
return nums[index + 1];

Explanation:
1. Insert into Set: A set is used to store unique elements. In this loop, each element of the nums array is inserted into the set.

2. Copy Unique Elements: A second loop iterates over the set, copying each unique element back into the nums array.

3. Return Size: The final step is to return the size of the array, which is represented by index + 1. The index variable keeps track of the last position updated in the array.

Time Complexity: The insertion into the set takes O(N log N), and the second loop takes O(N), resulting in a total time complexity of O(N log N + N).
Space Complexity: The space complexity is O(N) because, in the worst case, the set could contain all unique elements.

Approach 2:

int j = nums.size();
set<int> s = {nums.begin(), nums.end()};
nums.clear();
for (auto i : s)
    nums.push_back(i);
int k = nums.size();
return k;

Explanation:
1. Initialize Set: The set is initialized directly with the elements of the nums array.

2. Clear and Populate: The nums array is cleared, and then the unique elements from the set are pushed back into it.

3. Return Size: The size of the modified nums array is returned.

Time Complexity: The time complexity is dominated by the set initialization, which takes O(N log N) time.
Space Complexity: The space complexity is O(N) because the set could potentially store all unique elements.

Both approaches aim to remove duplicates by leveraging the property of sets to store unique elements. However, Approach 1 uses two loops and has a slightly higher time complexity due to the insertion and iteration over the set. Approach 2 uses a more concise method by directly initializing the set with array elements. The choice between the two depends on the specific requirements and constraints of your application.

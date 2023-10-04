'''
Combination Sum

Given an array of integers and a sum B, find all unique combinations in the array where the sum is equal to B.
 The same number may be chosen from the array any number of times to make B.

Example 1:

Input:
N = 4
arr[] = {7,2,6,5}
B = 16
Output:
(2 2 2 2 2 2 2 2)
(2 2 2 2 2 6)
(2 2 2 5 5)
(2 2 5 7)
(2 2 6 6)
(2 7 7)
(5 5 6)

'''


class Solution:
    def combinationalSum(self, arr, target):
        def combinationSum(index, target, path):
            if target == 0:
                result.append(path[:])
                return
            elif target < 0 or index == len(arr):
                return
            else:
                path.append(arr[index])
                combinationSum(index, target - arr[index], path)
                path.pop()
                combinationSum(index + 1, target, path)

        result = []
        combinationSum(0, target, [])
        return result

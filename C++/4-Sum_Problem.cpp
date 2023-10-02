#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> result;
        
        if (nums.empty()) {
            return result;
        }
        
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
    
        for (int i = 0; i < n; i++) {
            int target_3 = target - nums[i];
        
            for (int j = i + 1; j < n; j++) {
                int target_2 = target_3 - nums[j];
                int front = j + 1;
                int back = n - 1;
            
                while (front < back) {
                    int two_sum = nums[front] + nums[back];
                
                    if (two_sum < target_2) {
                        front++;
                    } else if (two_sum > target_2) {
                        back--;
                    } else {
                        std::vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[front];
                        quadruplet[3] = nums[back];
                        result.push_back(quadruplet);
                    
                        while (front < back && nums[front] == quadruplet[2]) {
                            front++;
                        }
                    
                        while (front < back && nums[back] == quadruplet[3]) {
                            back--;
                        }
                    }
                }
                
                while (j + 1 < n && nums[j + 1] == nums[j]) {
                    j++;
                }
            }
        
            while (i + 1 < n && nums[i + 1] == nums[i]) {
                i++;
            }
        }
    
        return result;
    }
};

int main() {
    Solution obj;
    std::vector<int> v{1, 0, -1, 0, -2, 2};
    
    std::vector<std::vector<int>> sum = obj.fourSum(v, 0);
    std::cout << "The unique quadruplets are" << std::endl;
    
    for (int i = 0; i < sum.size(); i++) {
        for (int j = 0; j < sum[i].size(); j++) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

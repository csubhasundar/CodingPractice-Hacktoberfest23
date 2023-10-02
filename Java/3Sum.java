//https://leetcode.com/problems/3sum/

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int target = 0;
        Arrays.sort(nums);
        Set<List<Integer>> set = new HashSet<>();
        List<List<Integer>> ans = new ArrayList<>();

        for(int i=0; i<nums.length; i++){
            int j = i+1;
            int k = nums.length-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(target==sum){
                    set.add(Arrays.asList(nums[i], nums[j], nums[k]));
                    k--;
                    j++;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        ans.addAll(set);
        return ans;
    }
}

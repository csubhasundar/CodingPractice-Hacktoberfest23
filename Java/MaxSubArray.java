class Solution {
    public int maxSubArray(int[] nums) {
        int max = nums[0];
        int currentSum=0;

        for (int i : nums) {
            if(currentSum<0){
                currentSum=0;
            }
            currentSum+=i;
            max = Math.max(max,currentSum);
        }
        return max;
    }
}

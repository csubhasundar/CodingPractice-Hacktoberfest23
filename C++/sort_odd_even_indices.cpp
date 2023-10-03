class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> vect1,vect2;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2)
                vect1.push_back(nums[i]);
            else 
                vect2.push_back(nums[i]);
        }
        
        sort(vect1.begin(),vect1.end());
        sort(vect2.begin(),vect2.end());
        reverse(vect1.begin(),vect1.end());
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2)
            {
                nums[i]=vect1[j];
                j++;
            }
            else 
            {
                nums[i]=vect2[k];
                k++;
            }
        }
        return nums;
        
    }
};
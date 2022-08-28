class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=nums[0],min=nums[0];
        int ans=1;
        for(int i=1;i<nums.size();i++)
        {
            if(max<nums[i])
            {
                max=nums[i];
            }
            
            if(min>nums[i])
            {
                min=nums[i];
            }
        }
        for(int i=2;i<=min;i++)
        {
           if(max%i==0 && min%i==0)
           {
               ans=i;
           }
        }
        return ans;
    }
};
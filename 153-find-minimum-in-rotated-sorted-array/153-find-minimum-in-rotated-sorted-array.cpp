class Solution {
public:
    int mini(vector<int> nums,int low,int high)
    {
        if(nums[0]<=nums[nums.size()-1])
        {
            return nums[0];
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid<nums.size()-1 && nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            else
            if(mid>0 && nums[mid]<nums[mid-1])
            {
                return nums[mid];
             }
            
             if(nums[low]<=nums[mid])
              {
                 low=mid+1;
              }
             else
                 high=mid-1;
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        return mini(nums,0,nums.size()-1);
    }
};
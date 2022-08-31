class Solution {
public:
    int binary(vector<int> nums,int low,int high,int target)
    {
        int mid=low+(high-low)/2;
         if(low>high)
         {
             return -1;
         }
        
        if(nums[mid]==target)
        {
            return mid;
         }
        else
        if(nums[mid]>target)
        {
           return binary(nums,low,mid-1,target);
        }
        else
           return binary(nums,mid+1,high,target);
    }
    int search(vector<int>& nums, int target) {
        int x=binary(nums,0,nums.size()-1,target);
        return x;
    }
};
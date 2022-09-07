class Solution {
public:
    int first(vector<int> nums,int target,int low,int high)
    {
        int ans=-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               high=mid-1;
           }
           else
            if(nums[mid]<target)
            {
                low=mid+1;
            }
           else
               high=mid-1;
       }
        return ans;
    }
    int last(vector<int> nums,int target,int low,int high)
    {
        int ans=-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           if(nums[mid]==target)
           {
               ans=mid;
               low=mid+1;
           }
           else
            if(nums[mid]<target)
            {
                low=mid+1;
            }
           else
               high=mid-1;
       }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target,0,nums.size()-1));
        ans.push_back(last(nums,target,0,nums.size()-1));
        return ans;
    }
};
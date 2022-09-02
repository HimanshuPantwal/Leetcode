class Solution {
public:
    int binary(vector<int> nums,int target)
    {
        int low=0, high=nums.size()-1;
        int mid = low+(high-low)/2;
    
    while(low<=high){
        
         mid=low+(high-low)/2;
        
         if(nums[mid] == target)
            return mid;
        
        else if(nums[mid] < target)
            low=mid+1;
        
        else 
            high=mid-1;
    }
    if(nums[mid] > target)
        return mid;
    else
        return mid+1;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary(nums,target);
    }
};
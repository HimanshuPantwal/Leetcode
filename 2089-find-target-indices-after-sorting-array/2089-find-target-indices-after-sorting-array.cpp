class Solution {
    int foccurance(vector<int> arr, int low, int high, int x)
     {
       if (high >= low) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return foccurance(arr, (mid + 1), high, x);
        else
            return foccurance(arr, low, (mid - 1), x);
    }
    return -1;
   }
    int loccurance(vector<int> v,int low,int high,int target,int n)
    {
        int mid=low+(high-low)/2;
        if(low>high)
        {
            return -1;
        }
        else
        if((mid==n-1||v[mid+1]>target)&&v[mid]==target)
        {
            return mid;
        }
        else
        if(v[mid]>target)
        {
            return loccurance(v,low,mid-1,target,n);
        }
        else
            return loccurance(v,mid+1,high,target,n);
    }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        
        int first=foccurance(nums,0,nums.size()-1,target);
        int last=loccurance(nums,0,nums.size()-1,target,nums.size());
        if(first!=-1 && last!=-1)
        {
         for(int i=first;i<=last;i++)
         {
            ans.push_back(i);
         }
        }
        return ans;
    }
};
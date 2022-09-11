class Solution {
public:
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        int ans=0;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if((mid)*(mid+1)/2<=n)
            {
                ans=mid;
                low=mid+1;
            }
            else
            if((mid)*(mid+1)/2>n)
            {
                high=mid-1;
            }
        }
        return ans;
    }
};
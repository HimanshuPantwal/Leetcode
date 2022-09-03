// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         int high=n;
         int low=1;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(isBadVersion(mid))
            {
                 ans=mid;
                 high=mid-1;
            }
            else
            if(isBadVersion(mid)==false)
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
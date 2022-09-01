class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid-1>=0 && mid+1<arr.size() &&arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
                return mid;
            }
            else 
            if(mid+1<arr.size() && arr[mid+1]>arr[mid]) 
                low=mid+1;
            else
            if(mid-1>=0 && arr[mid-1]>arr[mid]) 
                high=mid-1;
        }
        return 0;
    }
};
class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        
        while(low <= high){
            int mid = (low+(long long)high)/2;
            
            if(mid*(long long)mid > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        return high;
    }
};
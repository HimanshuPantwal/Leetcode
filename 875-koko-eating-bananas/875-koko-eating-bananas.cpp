class Solution {
public:
   bool ispossible(vector<int>& piles,int mid,int h){
        long long cnt = 0;
        
        for(int i = 0;i<piles.size();i++){
    
            cnt+=(piles[i]+mid-1)/mid;
        }
        
        if(cnt>h) 
          return false;
        else 
          return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int high=*max_element(piles.begin(), piles.end());
        int low=1;
        int ans=high;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(ispossible(piles,mid,h))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1; 
        }
        return ans;
    }
};
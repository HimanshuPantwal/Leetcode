class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> a;
        
        for(auto x: nums)
		   a[x]++;
        
        for(auto i:a)
        {
            if(i.second==1)
            {
                return i.first;
            }
         }
       return -1;
    }
};
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int sum=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
             if(i->second==1)
             {
                 sum+=i->first;
             }
        }
        return sum;
    }
};
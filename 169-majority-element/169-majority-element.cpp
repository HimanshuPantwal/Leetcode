class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=1;
            }
            else
                m[nums[i]]++;
        }
        for(auto itr:m)
        {
            if(itr.second>(nums.size()/2))
            {
                return itr.first;
            }
        }
        return 0;
    }
};
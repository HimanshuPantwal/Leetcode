class Solution {
public:
    bool divideArray(vector<int>& nums) {
         unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int sum=0;
        for(auto i:m)
        {
            sum+=(i.second)/2;
        }
        if(sum==nums.size()/2)
        {
            return true;
        }
        return false;
    }
};
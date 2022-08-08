class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> numbers;
        vector<int> result;
        for(auto i:nums1)
        {
            numbers[i]=1;
        }
        for(auto i:nums2)
        {
            if(numbers[i])
            {
                result.push_back(i);
                numbers[i]=0;
            }
        }
        return result;
    }
};
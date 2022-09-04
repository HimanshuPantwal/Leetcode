class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int ans=-1;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->first==itr->second)
            {
                ans=max(ans,itr->second);
            }
        }
        return ans;
    }
};
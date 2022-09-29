class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> m;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            map<char,int> m1;
            for(int j=0;j<strs[i].size();j++)
            {
                m1[strs[i][j]]++;
            }
           m[m1].push_back(strs[i]);
        }
        for(auto i=m.begin();i!=m.end();i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};
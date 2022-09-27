class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>> m;
        vector<int> ans(k,0);
        for(int i=0;i<logs.size();i++)
        {
            m[logs[i][0]].insert(logs[i][1]);
        }
        for(auto i=m.begin();i!=m.end();i++)
        {
            set<int> s=i->second;;
            
            if(s.size()>0)
            {
              ans[s.size()-1]++;
            }
        }
        return ans;
    }
};
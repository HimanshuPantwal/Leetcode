class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
          map<int,string> m;
          vector<string> ans;
         for(int i=0;i<names.size();i++)
         {
             m[heights[i]]=names[i];
         }
        for(auto i=m.rbegin();i!=m.rend();i++)
        {
            ans.push_back(i->second);
        }
        return ans;
    }
};
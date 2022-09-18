class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        if(arr.size()==1)
        {
            return true;
        }
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int x=m[arr[0]];
        for(auto i=m.begin();i!=m.end();i++)
        {
          for(auto j=m.begin();j!=m.end();j++)
          {
               if(i!=j && i->second==j->second)
               {
                   return false;
               }
          }
        }
        return true;
    }
};
class Solution {
public:
    void find(vector<int> heights,vector<int>& ans)
    {
        stack<int> s;
           for(int i=heights.size()-1;i>=0;i--)
           {
               if(s.empty())
               {
                   ans.push_back(0);
               }
               else
               if(s.size()>0 && heights[i]<s.top())
               {
                  ans.push_back(1);  
               }
               else
               if(s.size()>0 && heights[i]>s.top())
               {
                   int count=0;
                   while(s.size()>0 && heights[i]>s.top())
                   {
                       count++;
                       s.pop();
                   }
                   if(s.size()==0)
                   {
                       ans.push_back(count);
                   }
                   else
                   {
                       ans.push_back(count+1);
                   }
               }
                s.push(heights[i]);
           }
    }
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> ans;
        find(heights,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
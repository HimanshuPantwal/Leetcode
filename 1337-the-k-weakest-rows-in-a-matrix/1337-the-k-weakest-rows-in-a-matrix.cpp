class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> ans;
        vector<int> answer;
        for(int i=0;i<mat.size();i++)
        {
            int low=0,high=mat[i].size()-1,count=0;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mat[i][mid]==1)
                {
                    count=mid+1;
                    low=mid+1;
                }
                else
                if(mat[i][mid]==0)
                {
                    high=mid-1;
                 }
            }
            ans.push_back(make_pair(count,i));
         }
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++)
        {
            answer.push_back(ans[i].second);
        }
        return answer;
    }
};
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        vector<string> ans(score.size());
        int index;
        if(pq.size())
        {
            index=pq.top().second;   
            ans[index]="Gold Medal";
            pq.pop();
        }
        if(pq.size())
        {
            index=pq.top().second;   
            ans[index]="Silver Medal";
            pq.pop();
        }
        if(pq.size())
        {
            index=pq.top().second;   
            ans[index]="Bronze Medal";
            pq.pop();
        }
        int x=4;
        while(!pq.empty())
        {
            index=pq.top().second;
            ans[index]=to_string(x);
            x++;
            pq.pop();
        }
        return ans;
    }
};
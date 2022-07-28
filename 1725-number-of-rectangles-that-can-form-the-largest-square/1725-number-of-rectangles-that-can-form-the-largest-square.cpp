class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
       vector<int> dp(rectangles.size(), 0);
        for(int i=0;i<rectangles.size();++i){
            dp[i] = min(rectangles[i][0], rectangles[i][1]);
        }
        sort(dp.begin(), dp.end(), greater<int>());
        int i=0;
        int cnt =0;
        while(dp[i] == dp[0]){
            cnt++;
            if(i+1 < dp.size())i++;
            else break;
        }
        return cnt;
    }
};
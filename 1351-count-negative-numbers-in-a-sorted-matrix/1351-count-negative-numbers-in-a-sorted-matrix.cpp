class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
        int i=0;
        int j=col-1;
        int count=0;
        while((i>=0 && i<rows) && (j>=0 && j<col))
        {
            if(grid[i][j]<0)
            {
                count+=rows-i;
                j--;
            }
            else
             if(grid[i][j]>=0)
             {
                 i++;
             }
        }
        return count;
    }
};
class Solution {
public:
int cost(vector<vector<int>>& grid,int i,int j,vector<vector<int>> &dp)
{
     int r=grid.size();
     int c=grid[0].size();
    if(i>=r || j>=c) return INT_MAX;
    if(i==r-1 && j==c-1) return grid[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int right=cost(grid,i,j+1,dp);
    int down=cost(grid,i+1,j,dp);
    dp[i][j]=grid[i][j]+min(right,down);
    return dp[i][j];
}
    int minPathSum(vector<vector<int>>& grid) {
       int r=grid.size();
       int c=grid[0].size();
       vector<vector<int>> dp(r,vector<int> (c,-1));
       return cost(grid,0,0,dp);
    }
};
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
     int r=grid.size();
     int c=grid[0].size();
    //  if(grid[r-1][c-1]==1)
    //  return 0;
    //  if(grid[0][0]==1 )
    //  return 0;
     for(int i=0;i<r;i++)
     {
        for(int j=0;j<c;j++)
        {
            if(grid[i][j]==1)
            grid[i][j]=-1;
        }
     }
     vector<vector<int>> dp(r,vector<int>(c));
     for(int i=0;i<c;i++)//for Row
     {
        if(grid[0][i]!=-1)
        dp[0][i]=1;
        else{
        dp[0][i]=-1;
        break;
        }
       
     }
     for(int j=0;j<r;j++)//for column
     {
        if(grid[j][0]!=-1)
        dp[j][0]=1;
        else
        {
        dp[j][0]=-1;
        break;
        }
     }

     for(int i=1;i<r;i++)
     {
        for(int j=1;j<c;j++)
        {
            if(grid[i][j]==-1)
            {
                dp[i][j]=-1;
                continue;
            }
            if(dp[i-1][j]!=-1 && dp[i][j-1]!=-1)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
            else if(dp[i-1][j]==-1)
            {
                dp[i][j]=dp[i][j-1];
            }
            else if(dp[i][j-1]==-1)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                continue;
            }
        }
     }
     return (dp[r-1][c-1]==-1 ? 0 : dp[r-1][c-1]);
    }
};
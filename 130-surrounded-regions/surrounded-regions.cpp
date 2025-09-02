class Solution {
public:
vector<vector<int>> direction{{0,1},{-1,0},{0,-1},{1,0}};
void dfs(vector<vector<char>>& board,int row,int col,vector<vector<int>>& visited)
{
    int r=board.size();
    int c=board[0].size();
    visited[row][col]=1;
    for(auto ele : direction)
    {
        int nrow=row+ele[0];
        int ncol=col+ele[1];

        if(nrow >=0 && nrow<r && ncol>=0 && ncol<c && visited[nrow][ncol]==0 && board[nrow][ncol]=='O')
        {
            dfs(board,nrow,ncol,visited);
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int a=board.size();
        int b=board[0].size();

        vector<vector<int>> visited(a,vector<int>(b,0));
        //for up and down
        for(int j = 0; j < b; j++) {
            if(board[0][j] == 'O' && visited[0][j] == 0)
                dfs(board, 0, j, visited);
            if(board[a-1][j] == 'O' && visited[a-1][j] == 0)
                dfs(board, a-1, j, visited);
        }

        // Left & right columns
        for(int i = 0; i < a; i++) {
            if(board[i][0] == 'O' && visited[i][0] == 0)
                dfs(board, i, 0, visited);
            if(board[i][b-1] == 'O' && visited[i][b-1] == 0)
                dfs(board, i, b-1, visited);
        }
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(board[i][j]=='O' && visited[i][j]==0)
                {
                    board[i][j]='X';
                }
            }
        }
    }
};
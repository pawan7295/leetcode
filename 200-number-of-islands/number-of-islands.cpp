class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int cc=0; //store the no of connected component
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                if(grid[r][c]=='0')
                {
                    //it is water body
                    continue;
                }
                if(grid[r][c]=='0')
                {
                    //it is visited land
                    continue;
                }
                //new unvisited land piece found ,i.e new connectd component
                cc++;
                grid[r][c]='1';
                queue<pair<int,int>> qu;
                qu.push({r,c});//store the source node
                while(qu.size()>0)
                {
                    auto curr=qu.front(); //get noe node from the node
                    qu.pop();
                    //go to all unvisited neighbour of the curr node
                    int currow=curr.first;
                    int currcol=curr.second;
                    //check up
                    if(currow-1>=0 && grid[currow-1][currcol]=='1')
                    {
                        qu.push({currow-1,currcol});
                        grid[currow-1][currcol]='0';
                    }
                    //check down
                    if(currow+1 < row && grid[currow+1][currcol]=='1')
                    {
                        qu.push({currow+1,currcol});
                        grid[currow+1][currcol]='0';
                    }
                    //check left
                    if(currcol-1>=0 && grid[currow][currcol-1]=='1')
                    {
                        qu.push({currow,currcol-1});
                        grid[currow][currcol-1]='0';
                    }
                    //check right
                    if(currcol+1<col && grid[currow][currcol+1]=='1')
                    {
                        qu.push({currow,currcol+1});
                        grid[currow][currcol+1]='0';
                    }
                }
            }
        }
        return cc;
    }
};
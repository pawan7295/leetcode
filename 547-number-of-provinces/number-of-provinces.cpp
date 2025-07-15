class Solution {
public:
void dfs(int node,vector<vector<int>>& adjlst,vector<int>& visited)
{
    visited[node]=1;
    for(auto neighbour : adjlst[node])
    {
        if(!visited[neighbour])
        {
            dfs(neighbour,adjlst,visited);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        //adjacency list
        vector<vector<int>> adjlst(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjlst[i].push_back(j);
                    adjlst[j].push_back(i);
                }
            }
        }
        vector<int> visited(n,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
              dfs(i,adjlst,visited);
            }
        }
        return count;
    }
};
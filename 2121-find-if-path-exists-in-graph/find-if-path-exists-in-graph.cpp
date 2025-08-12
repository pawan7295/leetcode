class Solution {
public:
void dfs(vector<vector<int>>& adj,int curr,vector<bool>& visited)
{
    visited[curr]=true;
    for(auto v : adj[curr])
    {
        if(visited[v]==false)
        {
            dfs(adj,v,visited);
        }
    }
}
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto ele : edges)
        {
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n,false);

        dfs(adj,source,visited);
        if(visited[destination]==false)
        return false;
        return true;
    }
};
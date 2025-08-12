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
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        vector<vector<int>> adj(n);
        for(auto ele : connections)
        {
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                count++;
                dfs(adj,i,visited);
            }
        }
        return count-1;
    }
};
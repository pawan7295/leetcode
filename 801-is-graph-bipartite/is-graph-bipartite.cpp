class Solution {
public:
bool bipartitebfs(vector<vector<int>> &adj,int node,vector<int>& color,int currcolor)
{
    queue<int> qu;
    qu.push(node);
    color[node]=currcolor;

    while(!qu.empty())
    {
        int u=qu.front();
        qu.pop();
        for(auto v : adj[u])
        {
            if(color[u]==color[v]) 
            return false;

            if(color[v]==-1)
            {
                color[v]=1-color[u];
                qu.push(v);
            }
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        // vector<vector<int>> adj(n);
        // for(auto ele : graph)
        // {
        //     int u=ele[0];
        //     int v=ele[1];
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }
        vector<int> color(n,-1);

        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(bipartitebfs(adj,i,color,1)==false)
                return false;
            }
        }
        return true;
    }
};
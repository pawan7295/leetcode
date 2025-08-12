class Solution {
public:
// void dfs(vector<vector<int>> &adj,int curr,vector<bool>& visited)
// {
//     visited[curr]=true;
//     for(auto v : adj[curr])
//     {
//         if(visited[v]==false)
//         {
//             dfs(adj,v,visited);
//         }
//     }
// }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // vector<vector<int>> adj(n);
        // for(auto ele : edges)
        // {
        //     int u=ele[0];
        //     int v=ele[1];
        //     adj[u].push_back(v);
        // }
        // vector<bool> visited(n,false);
        // vector<int> ans;
        // for(int i=0;i<n;i++)
        // {
        //     if(!visited[i])
        //     {
        //         ans.push_back(i);
        //         dfs(adj,i,visited);
        //     }
        // }
        // return ans;
        vector<int> indegree(n,0);
        for(auto ele : edges)
        {
            int v=ele[1];
            indegree[v]++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0) ans.push_back(i);
        }
        return ans;
    }
};
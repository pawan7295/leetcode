class Solution {
public:
void dfs(vector<vector<int>>& graph,vector<int>& path,vector<vector<int>>& ans,int start,int dest)
{
    path.push_back(start);
    if(start==dest){
         ans.push_back(path);
         path.pop_back();
         return;
    }
    for(auto neighbour : graph[start])
    {
        dfs(graph,path,ans,neighbour,dest);
    }
    path.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> ans;
        vector<int> path;
        if(n==0) return ans;
        dfs(graph,path,ans,0,n-1);

        return ans;
    }
};
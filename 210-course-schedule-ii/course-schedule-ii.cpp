class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& prerequisites) {  ///num=numCourses
             //creating graph
        vector<int> adj[num];
        for(auto it : prerequisites)
        {
            adj[it[1]].push_back(it[0]);
        }

    vector<int> indegree(num,0);
    for(int i=0;i<num;i++)
    {
        for(auto neighbour : adj[i])
        {
            //i->neighbour
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0;i<num;i++)
    {
        if(indegree[i]==0)
        {
            qu.push(i);
            vis.insert(i);
        }
    }
    vector<int> ans;
    while(qu.size()>0)
    {
        int node=qu.front();
        ans.push_back(node);
        qu.pop();
        for(auto neighbour : adj[node])
        {
             if(!vis.count(neighbour))
             {
                indegree[neighbour]--;
                if(indegree[neighbour]==0)
                {
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
    if(ans.size()==num)
    return ans;
    return {};
    }
};
class Solution {
public:
int n,m;
vector<vector<int>> direction{{0,1},{1,0},{-1,0},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        m=mat.size();
        n=mat[0].size();
        vector<vector<int>> result(m,vector<int>(n,-1));
        queue<pair<int,int>> qu;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    result[i][j]=0;
                    qu.push({i,j});
                }
            }
        }
        while(!qu.empty())
        {
            pair<int,int> p=qu.front();
            qu.pop();

            int i=p.first;
            int j=p.second;

            for(auto dir : direction)
            {
                int new_i=i+dir[0];
                int new_j=j+dir[1];

                if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && result[new_i][new_j]==-1)
                {
                    result[new_i][new_j]=result[i][j]+1;
                    qu.push({new_i,new_j});
                }
            }
        }
        return result;
    }
};
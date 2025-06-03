class Solution {
public:
int dist(vector<int> a,vector<int> b)
{
    return (b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]);
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
       vector<vector<int>> points{p1,p2,p3,p4};
       vector<int> ans;
       for(int i=0;i<4;i++)
       {
        for(int j=i+1;j<4;j++)
        {
            ans.push_back(dist(points[i],points[j]));
        }
       }
       sort(ans.begin(),ans.end());

       if(ans[0]==ans[1] && ans[2]==ans[3] && ans[1]==ans[2] && ans[0]!=ans[4] && ans[4]==ans[5])
       return true;
       else
       return false;
    }
};
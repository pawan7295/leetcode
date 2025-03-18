class Solution {
public:
void searchzero(vector<vector<int>> &matrix,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]==0)
            {
                rowzero(matrix,r,c,i);
                colzero(matrix,r,c,j);
            }
        }
    }
}
void rowzero(vector<vector<int>> &matrix,int r,int c,int i)
{
    for(int j=0;j<c;j++)
    {
        if(matrix[i][j]!=0)
        matrix[i][j]=-300;
    }
}

void colzero(vector<vector<int>> &matrix,int r,int c,int j)
{
    for(int i=0;i<r;i++)
    {
        if(matrix[i][j]!=0)
        matrix[i][j]=-300;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        searchzero(matrix,r,c);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==-300)
                matrix[i][j]=0;
            }
        }
    }
};
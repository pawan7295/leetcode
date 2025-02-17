class Solution {
public:
void dfs(vector<vector<int>> &image ,int currow ,int currcol ,int initialcolor,int newcolor)
{
    int m=image.size(); //row
    int n=image[0].size(); //column
    if(currow<0 || currcol<0 || currow>=m || currcol>=n)
    {
        return;
    }
    //if the cell you landed is not of initial color
    if(image[currow][currcol]!=initialcolor)
    return;
    image[currow][currcol]=newcolor;
    dfs(image,currow+1,currcol,initialcolor,newcolor);//down
    dfs(image,currow-1,currcol,initialcolor,newcolor);//up
    dfs(image,currow,currcol+1,initialcolor,newcolor);//right
    dfs(image,currow,currcol-1,initialcolor,newcolor);//left
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color==image[sr][sc])
        return image;
        dfs(image,sr,sc,image[sr][sc],color); //image[sr][sc] hold the previous color
        return image;
    }
};
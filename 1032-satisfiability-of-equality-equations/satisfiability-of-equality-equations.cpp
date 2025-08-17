class Solution {
public:
int find(int a,vector<int>& parents)
{
    if(a==parents[a]) return a;
    return parents[a]=find(parents[a],parents);
}
void unionn(int x,int y,vector<int>& parents,vector<int>& rank)
{
    int xparent=find(x,parents);
    int yparent=find(y,parents);
    if(xparent==yparent) return;
    if(rank[xparent]>rank[yparent])
    {
        parents[yparent]=xparent;
    }
    else if(rank[yparent]>rank[xparent])
    {
        parents[xparent]=yparent;
    }
    else
    {
        parents[yparent]=xparent;
        rank[xparent]=rank[xparent]+1;
    }
}
    bool equationsPossible(vector<string>& equations) {
        vector<int> parent(26);
        vector<int> rank(26,0);//all 26 alphabets
        for(int i=0;i<26;i++)
        {
            parent[i]=i;
        }
        for(auto s : equations)
        {
            if(s[1]=='=')
            {
                unionn(s[0]-'a',s[3]-'a',parent,rank);
            }
        }
        for(auto s : equations)
        {
            if(s[1]=='!')
            {
                int first=find(s[0]-'a',parent);
                int second=find(s[3]-'a',parent);
                if(first==second) return false;
            }
        }
        return true;
    }
};
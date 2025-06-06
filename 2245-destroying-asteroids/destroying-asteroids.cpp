class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& ast) { //ast=asteroids
        int n=ast.size();
        int i=0;
        int c=0;
        sort(ast.begin(),ast.end());
        long long sum=0;
        sum=mass;
        while(i<n)
        {
            if(sum>=ast[i])
            {
               sum=sum+ast[i];
                c++;
            }
            else
            {
                break;
            }
            i++;
        }
        if(n==c)
        return true;
        else
        return false;
    
    }
};
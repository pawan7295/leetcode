class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans;
        int n=num;
        while(n>0)
        {
            int d=n%10;
            ans.push_back(d);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        int count=0;
        
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==6 && count<1)
            {
                ans[i]=9;
                count++;
            }
        }
        int res=0;
        for(int i=0;i<ans.size();i++)
        {
            res=res*10+ans[i];
        }
        return res;
    }
};
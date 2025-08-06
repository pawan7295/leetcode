class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> ans;
        int c=n;
        while(c>0)
        {
            int d=c%10;
            ans.push_back(d);
            c=c/10;
        }
        reverse(ans.begin(),ans.end());
        bool nx = next_permutation(ans.begin(),ans.end());
        long long sum=0;
        for(int i=0;i<ans.size();i++)
        {
            sum=sum*10+ans[i];
        }
        if(!nx) return -1;

        if(sum > INT_MAX) return -1;

        if(n>sum) return -1;
        return sum;
    }
};
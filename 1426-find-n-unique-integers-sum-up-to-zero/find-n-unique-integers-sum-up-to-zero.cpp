class Solution {
public:
    vector<int> sumZero(int n) {
        int c=n;
        int sum=0;
        vector<int> ans;
        if(n==2)
        {
            ans.push_back(2);
            ans.push_back(-2);
            return ans;
        }
        for(int i=0;i<c-1;i++)
        {
            ans.push_back(i);
            sum=sum+i;
        }
        ans.push_back(-(sum));
        return ans;
    }
};
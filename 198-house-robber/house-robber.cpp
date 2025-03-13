class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prevone=0;
        int prevtwo=0;
        int maxsteal=0;
        if(n==0)
        return 0;
        if(n==1)
        return nums[0];
        for(int i=0;i<n;i++)
        {
            maxsteal=max(prevone,prevtwo+nums[i]);
            prevtwo=prevone;
            prevone=maxsteal;
        }
        return maxsteal;
    }
};
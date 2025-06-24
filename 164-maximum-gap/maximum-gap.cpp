class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mn=INT_MIN;
        int diff;
        for(int i=0;i<n-1;i++)
        {
            diff=nums[i+1]-nums[i];
            if(diff>mn)
            mn=diff;
        }
        if(mn>0)
        return mn;
        else
        return 0;
    }
};
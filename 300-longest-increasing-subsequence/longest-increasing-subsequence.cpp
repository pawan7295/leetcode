class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> fans(n,1);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
               if(nums[i]>nums[j])
               {
                fans[i]=max(fans[i],fans[j]+1);
               }
            }
            
        }
        sort(fans.begin(),fans.end());
        return fans.back();
    }
};
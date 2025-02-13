class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxpro=nums[0];
        int  minpro=nums[0];
        int result=nums[0];
       
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            swap(maxpro,minpro);

            maxpro=max(nums[i],nums[i]*maxpro);
            minpro=min(nums[i],nums[i]*minpro);

            result=max(maxpro,result);
        }

        return result;
    }
};
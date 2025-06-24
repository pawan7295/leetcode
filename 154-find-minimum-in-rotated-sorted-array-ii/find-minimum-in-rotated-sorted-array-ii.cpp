class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int a=INT_MAX;
       for(int i=0;i<n/2;i++)
       {
        if(nums[i]<a)
        a=nums[i];
       }

       int b=INT_MAX;
       for(int i=n/2;i<n;i++)
       {
        if(nums[i]<b)
        b=nums[i];
       }
       return min(a,b);
    }
};
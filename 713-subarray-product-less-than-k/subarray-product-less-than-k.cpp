class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int pro=1;
        int left=0;
        for(int i=0;i<nums.size();i++)
        {
            pro=pro*nums[i];
            while(pro>=k && left<=i)
            {
                pro=pro/nums[left];
                left++;
            }
            count=count+(i-left+1);
        }
        return count;
    }
};
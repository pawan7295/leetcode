class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> one;
        vector<int> two;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            one.push_back(nums[i]);
            else
            two.push_back(nums[i]);
        }
        int j=0;
        int k=0;
        for(int i=0;i<nums.size();i=i+2)
        {
         nums[i]=one[j];
         j++;
        }
         for(int i=1;i<nums.size();i=i+2)
        {
         nums[i]=two[k];
         k++;
        }
        return nums;
    }
};
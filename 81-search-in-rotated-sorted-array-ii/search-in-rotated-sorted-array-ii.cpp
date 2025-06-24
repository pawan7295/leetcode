class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()/2;i++)
        {
            if(nums[i]==target)
            return true;
        }
        for(int i=nums.size()/2;i<nums.size();i++)
        {
            if(nums[i]==target)
            return true;
        }
        return false;
    }
};
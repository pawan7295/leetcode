class Solution {
public:
    string triangleType(vector<int>& nums) {
        string st="none";
        if(nums.size()!=3)
        return "none";
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]<=nums[2])
        return st;
        
        if(nums[0]==nums[1] && nums[1]==nums[2])
        st="equilateral";
        else if(nums[0]==nums[1] || nums[1]==nums[2] || nums[2]==nums[3])
        st="isosceles";
        else
        st="scalene";
        return st;
    }
};
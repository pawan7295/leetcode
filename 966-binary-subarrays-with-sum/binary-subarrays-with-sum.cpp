class Solution {
public:
int lesssubarray(vector<int> &nums,int goal)
{
    if(goal<0)
    return 0;
    int l=0,r=0,sum=0,count=0;
    while(r<nums.size())
    {
        sum=sum+nums[r];
        while(sum>goal)
        {
            sum=sum-nums[l];
            l=l+1;
        }
        count=count+(r-l+1);
        r=r+1;
    }
    return count;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lesssubarray(nums,goal)-lesssubarray(nums,goal-1);
    }
};
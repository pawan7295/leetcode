class Solution {
public:
void permutation(vector<int>& nums)
{
    int l=nums.size();
    int idx=-1;
    for(int i=l-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    reverse(nums.begin()+idx+1,nums.end());
    int r=-1;
    for(int i=idx+1;i<l;i++)
    {
        if(nums[i]>nums[idx])
        {
            r=i;
            break;
        }
    }
    swap(nums[r],nums[idx]);
    return;
}
    void nextPermutation(vector<int>& nums) {
      permutation(nums);
    }
};
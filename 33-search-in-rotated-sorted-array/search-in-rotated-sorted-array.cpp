class Solution {
public:
int mini(vector<int>& v)
{
    int mn=INT_MAX;
    int idx;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<mn)
        mn=v[i];
        idx=i;
    }
    return idx;
}
    int search(vector<int>& nums, int target) {
        int m=mini(nums);
        for(int i=m;i<nums.size();i++)
        {
            if(nums[i]==target)
            return i;
        }
        for(int i=0;i<m;i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
};
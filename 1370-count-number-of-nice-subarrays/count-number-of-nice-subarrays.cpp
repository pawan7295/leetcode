class Solution {
public:
int subarray(vector<int>& v,int k)
{
    if(k<0) return 0;
    int l=0,r=0,sum=0,count=0;
    while(r<v.size())
    {
        sum=sum+v[r];
        while(sum>k)
        {
            sum=sum-v[l];
            l=l+1;
        }
        count=count+(r-l+1);
        r=r+1;
    }
    return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(1);
            }
        }
        return subarray(v,k)-subarray(v,k-1);
    }
};
#include<algorithm>
class Solution {
public:
int maxxi(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int mini(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            long long larg=nums[i];
            long long small=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                larg=maxxi(larg,nums[j]);
                small=mini(small,nums[j]);
                sum=sum+(larg-small);
            }
        }
        return sum;
    }
};
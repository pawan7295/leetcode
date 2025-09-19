class Solution {
public:

    int subarrayGCD(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int result=nums[i];
            for(int j=i;j<nums.size();j++)
            {
                result=gcd(result,nums[j]);
                if(result==k) count++;
                if(result<k) break;
            }
        }
        return count;
    }
};
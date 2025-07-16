class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cz=0,co=0,ct=0;
       int  n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            cz++;
            else if(nums[i]==1)
            co++;
            else
            ct++;
        }
        for(int i=0;i<n;i++)
        {
            if(i<cz)
            nums[i]=0;
            else if(i<(cz+co))
            nums[i]=1;
            else
            nums[i]=2;
        }
        return;
        
    }
};
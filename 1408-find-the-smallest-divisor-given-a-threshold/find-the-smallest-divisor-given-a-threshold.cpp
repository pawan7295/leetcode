class Solution {
public:
int maximum(vector<int>& nums)
{
    int mxx=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>mxx)
        {
            mxx=nums[i];
        }
    }
    return mxx;
}
int smallestdivisor(vector<int> &nums,int mid)
{
    int total=0;
    for(int i=0;i<nums.size();i++)
    {
    total=total+ceil((double)nums[i]/mid);
    }
    return total;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       //BRUTE FORCE

        //     for(int i=1;i<=high;i++)
        //     {
        //          int total=0;
        //         for(int j=0;j<nums.size();j++)
        //         {
        //           total=total+ceil((double)nums[j]/i);
        //         }
        //         if(total<=threshold)
        //       {
        //         return i;
        //       }
        // }

        // return -1;

        //optimal solution


        int low=1;
        int high=maximum(nums);

        int total=0;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(smallestdivisor(nums,mid)<=threshold)
            {
                high=mid-1;
                ans=mid;
            }
            else 
            {
                low=mid+1;
            }

        }
        return ans;
    }
};
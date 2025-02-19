class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int first=0;
        int last=nums.size()-1;
        int mid;
        int ans=-1;
        if(k>nums[nums.size()-1])
        return nums.size();
        while(first<=last)
        {
            mid=(first+last)/2;
            if(nums[mid]==k)
            return mid;
             if(nums[mid]<k)
            {
                first=mid+1;
            }
            else
            {
                ans=mid;
                last=mid-1;
            }

        }
        return ans;
    }
};
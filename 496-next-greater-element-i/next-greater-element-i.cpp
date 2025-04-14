class Solution {
public:
int search(vector<int> &nums2,int a)
{
    for(int i=0;i<nums2.size();i++)
    {
        if(nums2[i]==a)
        return i+1;
    }
    return -1;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++)
        {
             bool found=false;
            for(int j=search(nums2,nums1[i]);j<nums2.size();j++)
            {
                if(nums2[j]>nums1[i])
                {
                nums1[i]=nums2[j];
                found=true;
                break;
                }
            }
            if(found==false)
            nums1[i]=-1;
        }
        return nums1;
    }
};
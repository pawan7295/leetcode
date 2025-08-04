class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector<int> ans;
        int n=numbers.size();
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(numbers[i]+numbers[j]==target)
        //         {
        //         ans.push_back(i+1);
        //         ans.push_back(j+1);
        //         return ans;
        //         }
        //     }
        // }
        int sum=0;
        int left=0,right=n-1;
        while(left<right)
        {
            sum=numbers[left]+numbers[right];
            if(sum==target) return {left+1,right+1};
            else if(sum<target)
            {
                left++;
            }
            else right--;
        }
        return {};
    }
};
class Solution {
public:
void helper(vector<int>& nums,vector<int> ans,int idx,set<vector<int>> &st)
{
    if(idx==nums.size())
    {
        sort(ans.begin(),ans.end());
        st.insert(ans);
        return;
    }
    helper(nums,ans,idx+1,st);
    ans.push_back(nums[idx]);
    helper(nums,ans,idx+1,st);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int> ans;
       set<vector<int>> st;
       helper(nums,ans,0,st);
       vector<vector<int>> finalans;
       for(auto ele : st)
       {
        finalans.push_back(ele);
       }
       //finalans.push_back(" ");
       return finalans;
    }
};
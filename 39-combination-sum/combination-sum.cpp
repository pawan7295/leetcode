class Solution {
public:
void findcombination(int idx,int target,vector<int> &arr,vector<int> ds,vector<vector<int>>& ans)
{
    if(idx==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(arr[idx]<=target)
    {
        ds.push_back(arr[idx]);
        findcombination(idx,target-arr[idx],arr,ds,ans);
        ds.pop_back();
    }
    findcombination(idx+1,target,arr,ds,ans);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ds,ans);
        return ans;
    }
};
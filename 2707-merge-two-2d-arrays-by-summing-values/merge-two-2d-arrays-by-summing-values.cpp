class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
         unordered_map<int,int> mp;
        for(auto ele : nums1)
        {
            mp[ele[0]]=mp[ele[0]]+ele[1];
        }
        for(auto dle : nums2)
        {
           mp[dle[0]]=mp[dle[0]]+dle[1];
        }
        vector<vector<int>> ans;
        for(auto it : mp)
        {
            ans.push_back({it.first,it.second});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
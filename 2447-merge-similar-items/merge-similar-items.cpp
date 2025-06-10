class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int,int> mp;
        for(auto ele : items1)
        {
            mp[ele[0]]=mp[ele[0]]+ele[1];
        }
        for(auto dle : items2)
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
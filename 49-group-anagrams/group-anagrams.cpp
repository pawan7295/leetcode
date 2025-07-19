class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto ele : strs)
        {
            string temp=ele;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(ele);
        }
        vector<vector<string>> ans;
        for(auto dle : mp)
        {
            ans.push_back(dle.second);
        }
        return ans;
    }
};
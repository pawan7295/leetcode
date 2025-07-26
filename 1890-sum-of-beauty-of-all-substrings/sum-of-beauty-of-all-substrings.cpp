class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < n; j++) {
                mp[s[j]]++;
            int maxcheck = INT_MIN, mincheck = INT_MAX;
            for (auto ele : mp) {
                maxcheck = max(ele.second, maxcheck);
                mincheck = min(ele.second, mincheck);
            }
            if (maxcheck - mincheck >= 1) {
                count=count+(maxcheck-mincheck);
            }
        }
        }
        return count;
    }
};
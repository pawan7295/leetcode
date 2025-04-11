class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto ele : words)
        {
            mp[ele]++;
        }
        auto cmp=[](pair<int,string> &a,pair<int,string> &b)
        {
            if(a.first==b.first)
            {
                return a.second>b.second;
            }
            return a.first<b.first;
        };
    
        priority_queue<pair<int,string>, vector<pair<int,string>> , decltype(cmp)> pq(cmp);
        for(auto dle : mp)
        {
            pq.push({dle.second,dle.first});
        }
        vector<string> ans;
        while(k--)
        {
            string st=pq.top().second;
            ans.push_back(st);
            pq.pop();
        }
        return ans;
    }
};
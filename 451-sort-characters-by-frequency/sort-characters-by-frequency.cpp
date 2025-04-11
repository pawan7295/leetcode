class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c : s)
        {
            mp[c]++;
        }
        auto cmp=[](pair<int,char> &a,pair<int,char> &b)
        {
             if(a.first==b.first)
            return a.second>b.second;
            return a.first<b.first;
        };
        priority_queue<pair<int,char> , vector<pair<int,char>>,decltype(cmp)> pq(cmp);

        for(auto ele : mp)
        {
            pq.push({ele.second,ele.first});
        }
        string st="";
        while(pq.size()>0)
        {
            int fre=pq.top().first;
            int ch=pq.top().second;
            st=st+string(fre,ch);
            pq.pop();
        }
        return st;
    }
};
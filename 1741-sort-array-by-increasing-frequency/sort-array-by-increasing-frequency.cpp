class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int ele : nums)
        {
            mp[ele]++;
        }
        auto cmp=[](pair<int,int> &a, pair<int,int> &b)
        {
            if(a.first==b.first)
            {
                return a.second<b.second;
            }
            return a.first>b.first;
        };
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp) > pq(cmp);
        for(auto ele : mp)
        {
            pq.push({ele.second,ele.first});//frequency,key
        } 
        vector<int> ans;
        while(pq.size()>0)
        {
            int freq=pq.top().first;
            int no=pq.top().second;
           while(freq--)
           {
            ans.push_back(no);
           }
            
            pq.pop();
        }
        return ans;
    }
};
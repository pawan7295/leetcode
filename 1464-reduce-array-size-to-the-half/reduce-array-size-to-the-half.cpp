class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto ele : arr)
        {
            mp[ele]++;
        }
        int remove=0,count=0;
        int half=arr.size()/2;
        priority_queue<int> pq;
        for(auto dle : mp)
        {
            pq.push(dle.second);
        }
        while(remove<half)
        {
            remove=remove+pq.top();
            count++;
            pq.pop();
        }
        return count;
    }
};
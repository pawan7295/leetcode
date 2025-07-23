class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<>> pq;
        vector<int> ans;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                double dec=(double)arr[i]/arr[j];
                pq.push({dec,{arr[i],arr[j]}});
            }
        }
        while(--k)
        {
            pq.pop();
        }
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        return ans;
    }
};
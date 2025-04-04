class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<double> pq;
        for(int ele : gifts)
        {
            pq.push(ele);
        }
        long long sum=0;
        while(k--)
        {
            long long top=pq.top();
            pq.pop();
            long long temp=sqrt(top);
            pq.push(temp);
        }
        while(pq.size()>0)
        {
            sum=sum+pq.top();
            pq.pop();
        }
        return sum;
    }
};
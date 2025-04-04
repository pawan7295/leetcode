class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
      priority_queue<int> pq;
      for(int ele : piles)
      {
        pq.push(ele);
      }
      while(k--)
      {
        cout<<pq.top()<<" ";
        int top=pq.top();
       int  temp=top/2;
        pq.pop();
        pq.push(top-temp);
      }

      int sum=0;
      for(int i=0;i<piles.size();i++)
      {
        sum=sum+pq.top();
        pq.pop();
      }
      return sum;
    }
};
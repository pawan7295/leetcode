class Solution {
public:
    int halveArray(vector<int>& nums) {
       priority_queue<double> pq;
       double sum=0;
       for(int ele : nums)
       {
        pq.push((double)ele);
        sum=sum+ele;
       } 
       double add=0;
       int c=0;
       while(add<(sum/2))
       {
        double top=pq.top();
        double temp=top/2.0;
        add=add+temp;
        pq.pop();
        pq.push(temp);
        c++;
       }
       return c;
    }
};
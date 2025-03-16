class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        int n=prices.size();
        int cost=0;
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};
class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int sum=0;
        int n=card.size();
        
        for(int i=0;i<k;i++)
        {
            sum=sum+card[i];
        }
        int maxsum=sum;
        for(int i=0;i<k;i++)
        {
            sum=sum-card[k-1-i]+card[n-1-i];
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
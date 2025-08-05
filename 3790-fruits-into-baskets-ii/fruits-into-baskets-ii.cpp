class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int a=fruits.size();
        int b=baskets.size();
        int count=0;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
                if(fruits[i]<=baskets[j])
                {
                    count++;
                    baskets[j]=-1;
                    break;
                    
                }
            }
        }
        return a-count;
    }
};
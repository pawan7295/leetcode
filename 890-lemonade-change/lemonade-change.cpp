class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0;
        int ten=0;
        if(bills[0]>5)
        return false;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            five++;
            else if(bills[i]==10)
            {
                five--;
                ten++;
            }
            else
            {
                if(five>0 && ten>0)
                {
                    five--;
                    ten--;
                }
                else if(five>=3)
                {
                    five=five-3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
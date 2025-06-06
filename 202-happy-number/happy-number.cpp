class Solution {
public:
    bool isHappy(int n) {
     int d=0;
     int s=30;
     int sum=0;
     while(s--)
     {
      sum=0;
     while(n>0)
     {
        d=n%10;
        sum=sum+d*d;
        n=n/10;
     }
        if(sum==1)
        return true;
        n=sum;
     }
     return false;
    }
};
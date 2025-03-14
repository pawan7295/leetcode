class Solution {
public:
    int reverse(int x) {
        long long n=x;
        n=abs(n);
        long long d=0;
        long long rev=0;
        while(n!=0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(rev>INT_MAX)
        return 0;
        if(x<0)
        {
            if(-rev<INT_MIN)
            return 0;
        }
        if(x>0)
        return rev;
        if(x<0)
        return -rev;
        return 0;
    }
};
class Solution {
public:
int fibo(int n, vector<int> &dp)
{
    if(n==0 || n==1)
    return n;
    if(dp[n]!=-1)
    return dp[n];
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];
}
    int fib(int n) {
        //Using recursion TC=2_pow_N  it's  worst
        // if(n==0 || n==1)
        // return n;
        // return fib(n-1)+fib(n-2);

        //using dynamic programming
        vector<int> dp(n+1,-1);
        return fibo(n,dp);
    }
};
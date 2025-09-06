class Solution {
    int fibonnaic(int n,vector<int>&dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return fibonnaic(n-1,dp)+fibonnaic(n-2,dp);
    }
public:
    int fib(int n) {
      vector<int>dp(n+1,-1);
      return fibonnaic(n,dp);


        
    }
};
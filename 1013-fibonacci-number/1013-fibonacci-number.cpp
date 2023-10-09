class Solution {
public:
    int dp[31];
    int fibonacci(int n){
        if(n ==1 || n==0){
            return n;
        }
        if(dp[n]!= -1){
            return dp[n];
        }
        return dp[n] = fib(n-1) + fib(n-2);
    }
    
    int fib(int n) {
        memset(dp, -1,sizeof(dp));
       return fibonacci(n);

        
    }
};
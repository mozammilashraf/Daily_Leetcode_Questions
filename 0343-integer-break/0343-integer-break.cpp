
*******************************DP Approach********************************************
    
class Solution {
public:
    int dp[59];
    int solve(int n){

        if(dp[n]!= -1){
            return dp[n];
        }
        if(n==1) return 1;
        int result = INT_MIN;
        for(int i=1;i<=n-1;i++){
           int prod = i * max(n-i, solve(n-i));
            result = max(result, prod);
        }
        return dp[n]= result;
    }
    int integerBreak(int n) { 
        memset(dp, -1, sizeof(dp));
        return solve(n);
        
    }
};

Time Complexity: O(n^2)
Space Complexity: O(n) 

    ***********************************Greedy Approach:***************************************
    
class Solution {
public:
    int integerBreak(int n) {
        if (n <= 3) {
            return n - 1;
        }
        int result = 1;
        while (n > 4) {
            result *= 3;
            n -= 3;
        }
        result *= n;
        return result;
    }
};

Time Complexity: O(1)
Space Complexity: O(1)

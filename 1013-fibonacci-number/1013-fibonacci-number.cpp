class Solution {
public:
    int bottomup(int n)
    {
        vector<int> dp(n+1,-1);
        dp[0]=0;
        if(n==0)
        {
            return 0;
        }
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
    int topdown(int n , vector<int> &dp)
    {
         if(n==1 || n==0)
         {
             return n;
         }

         if(dp[n]!=-1)
         {
             return dp[n];
         }

         dp[n] = topdown(n-1,dp) + topdown(n-2,dp);

         return dp[n];
    }
    int fib(int n) 
    {
    //    vector<int> dp(n+1,-1);
    //    int ans = topdown(n,dp);
    //    return ans;

        return bottomup(n);
    } 
};
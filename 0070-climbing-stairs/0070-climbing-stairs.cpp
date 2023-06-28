class Solution {
public:
   
    int solusingdp(int n , vector<int> &dp)
    {


        if(n<=1)
        {
            return 1;
        }

        if(dp[n]!=0)
        {
            return dp[n];
        }

        dp[n] = solusingdp(n-1,dp) + solusingdp(n-2,dp);

        return dp[n];


    }

    int climbStairs(int n) 
    {
        vector<int> dp(n+1,0);
       return  solusingdp(n,dp);
    }
};
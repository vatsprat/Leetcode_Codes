class Solution {
public:
    long long solve(vector<vector<int>>& questions,int i,vector<long long int>& dp)
    {
        if(i>=questions.size())
        {
            return 0;
        }
        
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        long long inc = questions[i][0] + solve(questions,i+questions[i][1]+1,dp);

        long long exc = 0 + solve(questions,i+1,dp);

        dp[i] =  max(inc,exc);
        return dp[i];
    }
    long long mostPoints(vector<vector<int>>& questions) 
    {
        vector<long long int> dp(questions.size()+1,-1);
        return solve(questions,0,dp);
    }
};
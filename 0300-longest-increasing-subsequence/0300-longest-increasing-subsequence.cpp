class Solution {
public:
    int solve(vector<int>& nums , int prev , int curr,vector<vector<int>>& dp)
    {
        if(curr >= nums.size())
        {
            return 0;
        }

        if(dp[prev+1][curr]!=-1)
        {
            return dp[prev+1][curr];
        }
         

        int take=0;
        if(prev==-1 || nums[prev]<nums[curr])
        {
            take = 1 + solve(nums,curr,curr+1,dp);
        }

        int nottake = solve(nums,prev,curr+1,dp);

        dp[prev+1][curr] = max(take,nottake);

        return dp[prev+1][curr];





    }
    int lengthOfLIS(vector<int>& nums) 
    {
    int prev = -1;
    int curr =0;
    int n = nums.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return solve(nums,prev,curr,dp);
    }
};
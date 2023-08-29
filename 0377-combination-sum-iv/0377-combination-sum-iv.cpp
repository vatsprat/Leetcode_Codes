class Solution {
public:

    int solve (vector<int>&nums, int target, int i, vector<vector<int>> &dp){
        if(i>=nums.size())
            return 0;
        
        if(target==0) return 1;

        if(target<0) return 0;

        if(dp[i][target]!= -1) return dp[i][target];

        int excl = 0;
        int incl = 0;

        //exclude
        excl += solve(nums,target,i+1, dp);

        //include
        incl += solve(nums, target-nums[i], 0, dp);

        dp[i][target] = incl + excl;

        return dp[i][target];

    }

    int combinationSum4(vector<int>& nums, int target) {

        vector<vector<int>> dp(nums.size()+1, vector<int> (target+1, -1));
        return solve(nums,target, 0, dp);
    }
};
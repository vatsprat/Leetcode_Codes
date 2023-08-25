class Solution {
public:
    bool solve(int index,vector<int>& nums,int target,vector<vector<int>> & dp)
    {
        if(index>=nums.size())
        {
            return 0;
        }

        if(target<0)
        {
            return 0;
        }

        if(target == 0)
        {
            return 1;
        }

        if(dp[index][target]!=-1)
        {
            return dp[index][target];

        }


        bool inc = solve(index+1,nums,target-nums[index],dp);
        bool excl = solve(index+1,nums,target,dp);

        dp[index][target] =  inc || excl;

        return dp[index][target];
    }
    bool canPartition(vector<int>& nums) 
    {
        
        int sum = 0;
        for(auto i:nums)
        {
            sum += i;
        }
        if(sum&1)
        {
            return false;
        }

        vector<vector<int>> dp(nums.size()+1,vector<int>(sum/2+1,-1));

        return solve(0,nums,sum/2,dp);
    }
};
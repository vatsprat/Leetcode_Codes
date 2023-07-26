class Solution {
public:
    int solve(vector<int> &nums , int i , vector<int> &dp)
    {
        if(i>=nums.size())
        {
            return 0;
        }

        if(dp[i]!=-1)
        {
            return dp[i];
        }

        int exclude = 0 + solve(nums,i+1,dp);

        int include = nums[i] + solve(nums,i+2,dp);


        dp[i] = max(include,exclude);

        return dp[i];
    }
    int rob(vector<int>& nums) 
    {
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int> dp1(nums.size()+1,-1);
        int a1 = solve(nums,1,dp1);
        nums.pop_back();
        vector<int> dp2(nums.size()+1,-1);
        int a2 = solve(nums,0,dp2);

        return max(a1,a2);
    }
};
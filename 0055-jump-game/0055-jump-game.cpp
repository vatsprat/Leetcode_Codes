class Solution {
public:
    bool solve(vector<int>& nums , int index ,vector<int> &dp)
    {
        if(index>=nums.size()-1)
        {
            return true;
        }

        if(nums[index]==0)
        {
            return false;
        }
        if(dp[index]!=-1)
        {
            return dp[index];
        }

        int a = index + nums[index];

        for(int i=index + 1;i<=a;i++)
        {
            if(i<nums.size() && solve(nums,i,dp))
            {
                return dp[index] = true;
            }

        }

        return dp[index] = false; 



    }
    bool canJump(vector<int>& nums) 
    {
        int index = 0;
        
        vector<int> dp(nums.size()+1,-1);
        return solve(nums,index,dp);
        
    }
};
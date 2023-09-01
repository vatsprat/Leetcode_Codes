class Solution {
public:
    void solve(vector<int>& candidates,int target,int i,vector<int>  temp , set<vector<int>>& ans)
    {
        if(i>=candidates.size())
        {
        if(target==0)
        {
            // dp[i][target] = 0;
            sort(temp.begin(),temp.end());
            ans.insert(temp);
            return;

        }
            return;
        }
        if(target<0)
        {
           return;
        }

        // if(dp[i][target]!= -1)
        // {
        //     return;
        // }

        solve(candidates,target,i+1,temp,ans);

        temp.push_back(candidates[i]);

        solve(candidates,target-candidates[i],i,temp,ans);

        



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> temp;
        set<vector<int>> an;
        // int n = candidates.size()+1;
        // vector<vector<int>> dp(n,vector<int>(target+1,-1));
        // vector<vector<int>>& dp

        solve(candidates,target,0,temp,an);

        vector<vector<int>> ans(an.begin(),an.end());

        return ans;
        
    }
};
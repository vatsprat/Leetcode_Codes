class Solution {
public:
    int solve(string& a , string& b,int i,int j, vector<vector<int>>& dp)
    {
        if(i==a.length())
        {
            return b.length()-j;
        }
        if(j==b.length())
        {
            return a.length()-i;
        }

        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }


        if(a[i]==b[j])
        {
            dp[i][j]= solve(a,b,i+1,j+1,dp);
        }
        else
        {
            //insert
            int insert = 1 + solve(a,b,i,j+1,dp);
            int deleted = 1 + solve(a,b,i+1,j,dp);
            int replace = 1 + solve(a,b,i+1,j+1,dp);

            dp[i][j] = min(insert,min(deleted,replace));
        }


        return dp[i][j];

    }
    int minDistance(string word1, string word2) 
    {
        vector<vector<int>> dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        return solve(word1,word2,0,0,dp);
    }
};
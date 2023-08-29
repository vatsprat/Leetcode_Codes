class Solution {
public:

    int solve(int i, string &s, vector<int> &dp){
        int n = s.size();

        if(i==n) return 1;

        if(dp[i] != -1) return dp[i];

        int ans = 0;

        if(s[i] != '0'){
            ans += solve(i+1, s, dp); //Including only one character.
        }

        if(i+1<n && (s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))){
            ans += solve(i+2,s, dp); //Including two characters.
        }

        dp[i] = ans;

    return dp[i];
    }

    int numDecodings(string s) {
        vector<int> dp(s.size()+1, -1);
        return solve(0, s, dp);
    }
};
class Solution {
public:
    void solve(vector<vector<int>>& ans , vector<int> temp , int i , int& k , int n)
    {
        if(i>=10)
        {
            if(temp.size()==k && n==0)
            {
                ans.push_back(temp);
                
            }
            return;
        }

        solve(ans,temp,i+1,k,n);

        temp.push_back(i);

        // for(auto i:temp)
        // {
        //     cout<<i<<" ";
        // }

        // cout<<endl;

        solve(ans,temp,i+1,k,n-i);









    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans; 
        vector<int> temp;
        int i=1;
        solve(ans,temp,i,k,n);
        return ans;
        
    }
};
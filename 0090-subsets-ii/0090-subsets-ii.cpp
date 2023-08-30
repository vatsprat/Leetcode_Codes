class Solution {
public:
    void solve(vector<int>& nums,vector<int> temp,int i,set<vector<int>>& st)
    {
        if(i>=nums.size())
        {
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }

        //exclude

        solve(nums,temp,i+1,st);

        //include

        temp.push_back(nums[i]);

        solve(nums,temp,i+1,st);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int>> st;

        vector<int> temp;

        solve(nums,temp,0,st);

        vector<vector<int>> ans(st.begin(),st.end());

        return ans;


        
    }
};
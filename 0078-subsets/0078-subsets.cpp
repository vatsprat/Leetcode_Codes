class Solution {
public:
    void create(vector<int> &nums , vector<int> temp , vector<vector<int>>    &ans,int i)
    { 
         if(i==nums.size())
         {
             ans.push_back(temp);
             return;
         }

          create(nums,temp , ans,i+1);

          temp.push_back(nums[i]);

           create(nums,temp , ans,i+1);


    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
          vector<int> temp;
          vector<vector<int>> ans;
          int i=0;
          create(nums,temp , ans,i);

          return ans;
       
    }
};
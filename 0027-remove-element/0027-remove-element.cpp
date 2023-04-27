class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
       int s = 0;
       int e = nums.size()-1;

       while(s<=e)
       {

          if(nums[s]==val && nums[e]==val)
          {
              e--;
          }
          else if(nums[s]==val && nums[e]!=val)
          {
              swap(nums[s],nums[e]);
          }
          else if(nums[s]!=val && nums[e]==val)
          {
              e--;
          }
          else
          {
              s++;
          }

       }




       return e+1;
       
    }
};
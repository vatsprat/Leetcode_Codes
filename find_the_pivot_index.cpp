class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {   
       int leftsum=0;
       int sum=0;
       for(int n:nums) sum += n;

       for(int i=0;i<nums.size();i++)
       {
           if(leftsum==sum-leftsum-nums[i]) return i;
           leftsum=leftsum+nums[i];
       }
       return -1;
       
    }
};
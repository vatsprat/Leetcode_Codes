class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi = max(nums[i],maxi);
            }
            if(nums[i]<mini)
            {
                mini = min(nums[i],mini);
            }
        }
        
        
        cout<<mini<<" "<<maxi;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=maxi && nums[i]!=mini)
            {
                return nums[i];
            }
        }
        
        return -1;
    }
};
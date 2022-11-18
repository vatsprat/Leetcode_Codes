class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end)
        {
            mid=start +(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
            // if(start==end)
            // {
            //     if(nums[start]>target) return start-1;
            //     else start+1;
            // }
            




        }
        
        
        return start;
    }
};
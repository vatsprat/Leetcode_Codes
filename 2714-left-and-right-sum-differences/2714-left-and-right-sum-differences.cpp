class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
         int leftSumArray[nums.size()],rightSumArray[nums.size()];
        vector<int> ans;
        leftSumArray[0]=0;
        rightSumArray[nums.size()-1]=0;
        for(int i=1;i<nums.size();i++){
            leftSumArray[i]=leftSumArray[i-1]+nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            rightSumArray[i]=rightSumArray[i+1]+nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            int p=abs(leftSumArray[i]-rightSumArray[i]);
            ans.push_back(p);
        }
        return ans;
    }
};
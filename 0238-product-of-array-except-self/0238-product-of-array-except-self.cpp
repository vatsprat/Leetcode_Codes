class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> right;
        vector<int> left;

        right.push_back(1);
        left.push_back(1);

        for(int i=0;i<nums.size()-1;i++)
        {
            left.push_back(left[i]*nums[i]);
        }

        for(int i=0;i<nums.size()-1;i++)
        {
            right.push_back(right[i]*nums[nums.size()-1-i]);
        }
        for(auto i:left)
        {
            cout<<i<<" ";
        }

        reverse(right.begin(),right.end());


        vector<int> ans;

        for(int i=0;i<left.size();i++)
        {
            ans.push_back(left[i]*right[i]);
        }

        return ans;
    }
};
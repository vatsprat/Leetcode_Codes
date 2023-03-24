class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        //two pointer approach

        sort(nums.begin(),nums.end());
        set<pair<int,int>> mp;
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            if(nums[j]-nums[i]==k && i!=j)
            {
               mp.insert({nums[j],nums[i]});
                i++;
                j++;
            }
            else if((nums[j]-nums[i])>k)
            {
                i++;
            }
            else 
            {
                j++;
            }
        }


        return mp.size();
    }
};
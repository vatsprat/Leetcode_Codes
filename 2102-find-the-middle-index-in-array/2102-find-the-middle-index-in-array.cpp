class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        
        vector<int> left;
        vector<int> right;

        left.push_back(0);
        right.push_back(0);

        int sum=0;

        for(int i=0;i<nums.size()-1;i++)
        {
            sum+=nums[i];
            left.push_back(sum);

        }

        sum = 0;
        for(int i=nums.size()-1;i>=1;i--)
        {
            sum += nums[i];
            right.push_back(sum);
        }

        for(auto i:left)
        {
            cout<<i<<" ";
        }

        cout<<endl;

        for(auto i:right)
        {
            cout<<i<<" ";
        }

        reverse(right.begin(),right.end());

        for(int i=0;i<left.size();i++)
        {
            if(left[i]==right[i])
            {
                return i;
            }
        }


        





        return -1;
    }
};
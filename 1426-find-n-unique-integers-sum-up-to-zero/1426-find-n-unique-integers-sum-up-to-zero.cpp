class Solution {
public:
    vector<int> sumZero(int n) 
    {   
        int sum=0;
        vector<int> ans;
        for(int i=1;i<n;i++)
        {
            ans.push_back(i);
            sum+=i;

        }


        ans.push_back(-sum);


        return ans;
        
    }
};
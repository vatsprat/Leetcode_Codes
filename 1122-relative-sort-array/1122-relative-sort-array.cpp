class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        int flag=0;
        vector<int> ans;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=0;j<arr1.size();j++)
            {
                if(arr2[i]==abs(arr1[j]))
                {
                    if(arr2[i]==0)
                    {
                        flag=1;
                    }
                    ans.push_back(abs(arr1[j]));
                    arr1[j] *= -1;
                }
            }
        }
        
        sort(arr1.begin(),arr1.end());
        
        for(int i=0;i<arr1.size();i++)
        {
            if(flag==0)
            {
                if(arr1[i]>=0)
                {
                    ans.push_back(arr1[i]);
                }

            }
            else
            {
                if(arr1[i]>0)
                {
                    ans.push_back(arr1[i]);
                }
            }
        }
        
        
        return ans;
        
        
    } 
};
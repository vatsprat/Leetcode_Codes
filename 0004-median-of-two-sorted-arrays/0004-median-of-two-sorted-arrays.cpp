class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for(auto i:nums1)
        {
            ans.push_back(i);
        }
        for(auto i:nums2)
        {
            ans.push_back(i);
        }

        sort(ans.begin(),ans.end());
       for(auto i:ans)
        {
            cout<<i;
        }
        

        if(ans.size()%2!=0)
        {
            return ans[ans.size()/2];
        }
        else
        {
            int a = ans[ans.size()/2];
            cout<<a;
            int b = ans[ans.size()/2-1];
            cout<<b;
            double c  = (a+b)/2.0;

            return c;
        }


         
    }
};
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        { 
            vector<int> ans;
            unordered_map<int,int> mp;
            vector<int> v1;
            vector<int> v2;
            vector<int> v3;
            int i=0;
            while(i<n1-1)
            { 
                if(A[i]==A[i+1])
                {
                    i++;
                }
                else
                {
                v1.push_back(A[i]);
                i++;
                }
            }
            v1.push_back(A[n1-1]);
            
            
            i=0;
            while(i<n2-1)
            { 
                if(B[i]==B[i+1])
                {
                    i++;
                }
                else
            {
                v2.push_back(B[i]);
                i++;
            }
            }
            v2.push_back(B[n2-1]);
                
            i=0;
            while(i<n3-1)
            { 
                if(C[i]==C[i+1])
                {
                    i++;
                }
                else
            {
                v3.push_back(C[i]);
                i++;
            }
            }
            v3.push_back(C[n3-1]);
            
            for(int i=0;i<v1.size();i++)
            {
                mp[v1[i]]++;
            }
            for(int i=0;i<v2.size();i++)
            {
                mp[v2[i]]++;
            }
            for(int i=0;i<v3.size();i++)
            {
                mp[v3[i]]++;
            }
            for(int i=0;i<v1.size();i++)
            {
                if(mp[v1[i]]>=3)
                {
                    ans.push_back(v1[i]);
                }
            }
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
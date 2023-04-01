class Solution {
public:
    int countPoints(string rings) 
    {
        vector<int> ar(30,0);
       
        int a;
        for(int i=1;i<rings.length();i=i+2)
        {
            
            a = rings[i] - '0';
            
              if(rings[i-1]=='R')
              {
                  ar[a*3]++;
              }
              else if(rings[i-1]=='G')
              {
                 ar[(a*3)+1]++;
              }
              else if(rings[i-1] == 'B')
              {
                 ar[(a*3)+2]++;
              }
            
        }
        for(auto i:ar)
        {
            cout<<i<<" ";
        }
        int i=0;
        int count=0;
        while(i<ar.size())
        {
            if(ar[i]>=1 && ar[i+1]>=1 && ar[i+2]>=1)
            {
                count++;
                i=i+3;
            }
            else
            {
                i=i+3;
            }
        }


        return count;
    }
};
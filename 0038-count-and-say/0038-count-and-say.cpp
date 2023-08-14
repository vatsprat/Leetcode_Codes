class Solution {
public: 

    string solve(int n,string temp , string ans)
    {

        if(n==1)
        {
            return "1";
        }

        temp = solve(n-1,temp,ans);

        int freq = 1;
        char currnum = temp[0];

        for(int i=1;i<temp.length();i++)
        {
            if(currnum==temp[i])
            {
                freq++;
            }
            else
            {
                ans.push_back(freq+'0');
                ans.push_back(currnum);

                currnum = temp[i];
                freq = 1;
            }
        }

                ans.push_back(freq+'0');
                ans.push_back(currnum);


            temp = ans;

        return temp;
    }
    string countAndSay(int n) 
    { 
      string temp;
      string ans;
      return solve(n,temp,ans);
        
    }
};
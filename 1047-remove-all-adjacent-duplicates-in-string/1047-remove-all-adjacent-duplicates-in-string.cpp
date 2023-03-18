class Solution {
public:
    string removeDuplicates(string s) 
    {
        int i=0;
        string ans;
       while(i<s.length())
       {
           if(ans.length()>0 && (ans[ans.length()-1]==s[i]))
           {
               ans.pop_back();
           }
           else 
           {
              ans.push_back(s[i]);
           }
           i++;
       }
       
        return ans;
    }
};
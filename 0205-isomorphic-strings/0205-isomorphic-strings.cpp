class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        map<char,char> mp;
        map<char,bool> mp2;
       

        for(int i=0;i<s.length();i++)
        {
           if(mp2[t[i]]==false)
           {
                mp[s[i]]=t[i];

           }
                mp2[t[i]]=true;
             
        }
        for(int i=0;i<s.length();i++)
        {

                if(mp[s[i]]!=t[i])
                return false;
             
        }
        
         return true;
    }
};
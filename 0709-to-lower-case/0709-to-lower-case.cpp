class Solution {
public:
    string toLowerCase(string s) 
    {
        int i=0;
        while(i<s.length())
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]-'A'+'a';
            }
            i++;
        }
        return s;
    }
};
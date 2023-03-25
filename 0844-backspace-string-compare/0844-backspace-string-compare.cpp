class Solution {
public:
    string removebackspace(string s)
    {
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='#' && i!=0)
            {
                s.erase(i-1,2);
                i=-1;
            }
            else if(s[i]=='#' && i==0)
            {
                s.erase(i,1);
                i=-1;
            }
            i++;
        }
        return s;
    }
    
    bool backspaceCompare(string s, string t) 
    {
        s = removebackspace(s);
        t = removebackspace(t);
        cout<<s<<" "<<t;
        if(s.compare(t)==0)
        return true;
        else
        return false;
    }
};
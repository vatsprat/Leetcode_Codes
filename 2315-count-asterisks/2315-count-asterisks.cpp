class Solution {
public:
    int countAsterisks(string s) 
    {
        stack<char> st;
        int i=0;
        int count=0;
        while(i<s.length())
        {
            if(s[i]=='*' && st.empty())
            {
                count++;
                i++;
            }
            else if(s[i]=='|' && st.empty())
            {
                st.push('|');
                i++;
            }
             else if(s[i]=='|' && !st.empty())
            {
                st.pop();
                i++;
            }
            else
            {
                i++;
            }



        }
        return count;
    }
};
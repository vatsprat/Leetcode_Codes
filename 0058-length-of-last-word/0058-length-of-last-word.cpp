class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int count=0;
        int n = s.size()-1;
        int flag = 0;
        for(int i=n;i>=0;i--)
        {
               if(s[i]==' ' && flag != 0)
               {
                    break;
               }
               else if(s[i]!=' ')
               {
                   flag=1;
                   count++;
               }
        }

        return count;
    }
};
class Solution {
public:
    int con(char a)
    {

       if(a == 'I' ) return 1;
       if(a == 'V') return 5;
       if(a == 'X') return 10;
       if(a == 'L') return 50;
       if(a == 'C') return 100;
       if(a == 'D') return 500;
       if(a == 'M') return 1000;
    //    if(a == 'I' && b=='V') return 4;
    //    if(a == 'I' && b=='X') return 9;
    //    if(a == 'X' && b=='L') return 40;
    //    if(a == 'X' && b=='C') return 90;
    //    if(a == 'C' && b=='D') return 400;
    //    if(a == 'C' && b=='M') return 900;

       return 0;


    }
    int romanToInt(string s) 
    {
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'I' && s[i+1]=='V')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else if(s[i] == 'I' && s[i+1]=='X')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else if(s[i] == 'X' && s[i+1]=='L')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else if(s[i] == 'X' && s[i+1]=='C')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else if(s[i] == 'C' && s[i+1]=='D')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else if(s[i] == 'C' && s[i+1]=='M')
            {
                ans = ans + con(s[i+1])-con(s[i]);
                i++;
            }
            else
            {
                ans = ans + con(s[i]);
            }
        }
        return ans;
    }
};
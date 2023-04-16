class Solution {
public:
    bool isletter(char a)
    {
 
        if(a>=97 && a<=122)
        {
            return true;
        }
        else if(a>=65 && a<=90)
        {
            return true;
        }
        else
        {
            return false;
        }



    }
    string reverseOnlyLetters(string s) 
    {
        
        int st=0;
        int e=s.length()-1;

        while(st<=e)
        {

            if(isletter(s[st]) && isletter(s[e]) )
            {
                swap(s[st],s[e]);
                st++;
                e--;
            }
            else if(isletter(s[st]) && !isletter(s[e]) )
            {
                e--;
            }
            else if(!isletter(s[st]) && isletter(s[e]) )
            {
                st++;
            }
            else
            {
                st++;
                e--;
            }




        }





        return s;






    }
};
class Solution {
public:
bool isvowel(char a)
{
       if(a=='a'|| a =='e' || a =='i' || a =='o' || a =='u' || a =='A' || a == 'E' || a =='I' || a == 'O' || a =='U')
       {
           return true;
       }
       return false;
}

    string reverseVowels(string s) 
    {
        int st=0;
        int e=s.length()-1;
        while(st<=e)
        {
            if(isvowel(s[st]) && isvowel(s[e]))
            {
                swap(s[st],s[e]);
                st++;
                e--;
            }
            else if(isvowel(s[st]) && !isvowel(s[e]))
            {
                e--;
            }
            else if(!isvowel(s[st]) && isvowel(s[e]))
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
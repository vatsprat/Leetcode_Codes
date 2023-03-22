class Solution {
public:
    bool isPalindrome(string s) 
    {

    string l;
    int i=0;
    while(i<s.length())
    {
        if(s[i]>=32 && s[i]<=47)
        {
             i++;
        }
        else if(s[i]>=58 && s[i]<=64)
        {
            i++;
        }
        else if(s[i]>=91 && s[i]<=96)
        {
            i++;
        }
         else if(s[i]>=123 && s[i]<=127)
        {
            i++;
        }
        else 
        {
            l.push_back(s[i]);
            i++;
        }
    }

   i=0;
   while(i<l.length())
   {
      
       if(l[i]>=65 && l[i]<=90)
       {
           l[i]=l[i] - 'A' + 'a';
           i++;
       }
       else
       {
           i++;
       }
   }
//    i=0;
//    while(i<l.length())
//    {
//        cout<<l[i];
//        i++;
//    }
   int st=0;
   int e=l.length()-1;
   while(st<=e)
   {
       if(l[st]!=l[e])
       {
           return 0;
       }
       else
       {
            st++;
            e--;
       }
   }
   return 1;
}
};
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        if(x>=0 && x<10)
        {
            return true;
        }
        if(x%10==0)
        {
            return false;
        }

        int a = x;
        long long int ans=0;
        int i=0;
        while(a!=0)
        {

              int digit  = a%10;
              ans = (ans*10) + digit;
              i++;
              a = a/10;
        }

        if(ans==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
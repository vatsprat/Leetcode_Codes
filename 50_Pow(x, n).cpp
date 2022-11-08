class Solution {
public:
    double myPow(double x, int n) 
    {   if(x==1) return double(1);
       long long nn=n;
       double sum =1.0;
       if(nn<0)
       {
           nn=-1*nn;
       }
       while(nn)
       {
           if(nn%2)
           {
               sum=sum*x;
               nn=nn-1;
           }
           else
           {
               x=x*x;
               nn=nn/2;
           }
       }
       if(n<0) sum=1/sum;


       

        
        return sum;
    }
};
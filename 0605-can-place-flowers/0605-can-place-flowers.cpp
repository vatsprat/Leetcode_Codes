class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(flowerbed.size()==1 && flowerbed[0]==0)
        {
            return true;
        }
        if(flowerbed.size()==1 && flowerbed[0]==0 && flowerbed[1]==0 )
        {
            return true;
        }
        int countzeros = 0;
        int flag = 0 ;
        while(n!=0)
        {
            if(flag==1)
            {
                break;
            }
            for(int i=0;i<flowerbed.size();i++)
            {
                if(flowerbed[i]==0)
                {
                    countzeros++;
                }
                else
                {
                    countzeros = 0 ;
                }
                if(countzeros==2 && i==1)
                {
                    flowerbed[i-1] = 1;
                     n--;
                     countzeros = 0;
                     break;
                }
                if(countzeros==2 && i==flowerbed.size()-1)
                {
                    flowerbed[i-1] = 1;
                     n--;
                     countzeros = 0;
                     break;
                }
                if(countzeros==3)
                {
                    flowerbed[i-1] = 1;
                     n--;
                     countzeros = 0;
                     break;
                }
                if(i==flowerbed.size()-1 && countzeros!=3)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(n==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        

    }
};
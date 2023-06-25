class Solution {
public:
    bool calculate_gcd(int a, int b)
    {
       while(a>1 && b>1)
       {
           if(a>=b)
           {
               a = a-b;
           }
           else
           {
               b=b-a;
           }
           
       }
        if(a==1 || b==1)
        {
            return true;
        }
            
            return false;
            
                        
        
        
    }
    int first_digit(int a)
    {
        while(a>=10)
        {
            a = a/10;
        }
        
        return a;
    }
    int countBeautifulPairs(vector<int>& nums) 
    {
        
       int ans = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(calculate_gcd(first_digit(nums[i]),(nums[j]%10)))
                {
                    ans++;
                }
            }
        }
        
        
        return ans;
        
        
        
    }
};
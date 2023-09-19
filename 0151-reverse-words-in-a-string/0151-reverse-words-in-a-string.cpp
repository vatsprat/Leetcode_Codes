class Solution {
public:
    string reverseWords(string s) 
    {
       vector<string> vc;
       s.push_back(' ');
       
       int i=0;
       while(s[i]==' ')
       {
           i++;
       }
        string temp;
       while(i<=s.length())
       {
           
            if(s[i]!=' ')
            {
                temp.push_back(s[i]);
                i++;
            }
            else
            {
                if(!temp.empty())
                {
                vc.push_back(temp);
                temp.clear();

                }
                i++;
         
            }

       }
       string ans;

       for(int i=vc.size()-1;i>=0;i--)
       {
           if(i!=0)
           {
           ans+=vc[i]+" ";

           }
           else
           {
               ans+=vc[i];
           }
       }


       return ans;
        
    }
};
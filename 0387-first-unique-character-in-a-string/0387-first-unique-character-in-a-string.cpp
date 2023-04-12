class Solution {
public:
    int firstUniqChar(string s) 
    {
        char a;
        unordered_map<char,int> freq;
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]]++;
        }
        // for(int i=0;i<freq.size();i++)
        // {
        //     if(freq[s[i]]==1) 
        //     {
        //     a=s[i];
        //     break;

        //     }
        // }
        for(int i=0;i<s.length();i++)
        {
            if(freq[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};
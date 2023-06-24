class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) 
    {
        for(int i=0;i<words.size();i++)
        {
            sort(words[i].begin(),words[i].end());
        }
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        int ans = 0;
        for(auto i:mp)
        {
            if(i.second>1)
            {
                ans++;
            }
        }
        
        
        return ans;
        
       
    }
};
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    { 
        set<string> st;
        vector<string> ans;

        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(i!=j)
                {
                 int a = words[j].find(words[i]);
                 if(a>=0)
                 {
                     st.insert(words[i]);
                 }

                }
            }
        }

       for(auto i:st)
       {
           ans.push_back(i);
       }

       return ans;
       
    }
};
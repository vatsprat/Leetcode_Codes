class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int a=-1;
        int temp = -1;
        vector<string> ans;
        int n = names.size();
        int i=0;
        while(n>0)
        {
        while(i<heights.size())
        {

            if(heights[i]>temp)
            {
                temp=heights[i];
                a = i;


            }
            i++;
        }

        
        ans.push_back(names[a]);
        heights[a]= 0;
        temp=-1;
        i=0;

        n--;
        }
        return ans;

    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        map<vector<int> , int>  mp;
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            mp[grid[i]]++;
        }

        for(auto i : mp)
        {
            cout << "Row: ";
            for(auto num : i.first)
            {
                cout << num << " ";
            }
            cout << ", Count: " << i.second << endl;
        }
        for(int i=0 ;i<grid.size();i++)
        {
               vector<int> temp(grid.size());
               for(int j=0;j<grid.size();j++)
               {
                   temp[j] = grid[j][i];
               }
              
              count = count + mp[temp];
              for(auto v:temp)
              {
                  cout<<v<<" ";
              }
              cout<<endl;
              temp.clear();
        }

        return count;
    }
};
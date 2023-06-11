class Solution {
public:
    bool checkInside(int x ,int y , vector<int> &a)
    {
        if(pow(x-a[0],2)+pow(y-a[1],2)-pow(a[2],2)<=0)
        {
            return true;
        }
        return false;
       
       
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) 
    {
        
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            
                int count=0;
                  for(int j=0;j<points.size();j++)
                  {
                      for(int k=0;k<points[j].size()-1;k++)
                      {
                          if(checkInside(points[j][k],points[j][k+1],queries[i]))
                          {
                              count++;
                          }
                      }
                  }

                  ans.push_back(count);
           
        }

        return ans;
    }
};
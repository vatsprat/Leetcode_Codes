class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int> points;
        int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                points.pop();
            }
            else if(operations[i]=="D")
            {
                int a = points.top();
                a = a * 2;
                points.push(a);
            }
            else if(operations[i]== "+" )
            {
                int a = points.top();
                points.pop();
                int b = points.top();
                points.push(a);
                int r = a + b;
                points.push(r);
            }
            else
            {
                int d = stoi(operations[i]);
                points.push(d);
            }







        }
        while(!points.empty())
        {
            int k = points.top();
            sum = sum + k;
            points.pop();
            
        }
        return sum;
    }

};
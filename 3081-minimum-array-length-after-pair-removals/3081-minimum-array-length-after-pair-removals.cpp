class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) 
    {
        priority_queue<int>P;
        int n = nums.size();
        
        map<int,int>count;
        for(int i=0;i<n;++i){
            count[nums[i]]++;
        }
        
        for(auto&x:count)P.push(x.second);
        int ans = 0;
        while(!P.empty()){
            int cur = P.top();
            P.pop();
            if(P.empty()){
                ans = cur;
                break;
            }
            int cur2 = P.top();
            P.pop();
            cur2--;
            cur --;
            if(cur)P.push(cur);
            if(cur2)P.push(cur2);
        }
        
        return ans;
    }
};
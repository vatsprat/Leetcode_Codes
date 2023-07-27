class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int max = 0;
       
            for(auto it : mpp){
                if(it.second > max){
                    //ans.push_back(it.first);
                    max = it.second;
                }
            }
            while(k!=0){
                for(auto it : mpp){
                    if(max == it.second){
                        ans.push_back(it.first);
                        k--;
                    }
                }
                max--;
            }
        return ans;
    }
};
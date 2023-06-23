class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int w_count=0;
        int ans = blocks.size();


        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            {
                w_count++;
            }
        }
        ans = min(ans,w_count);

        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i]=='W') w_count++;
            if(blocks[i-k]=='W') w_count--;
            ans = min(ans,w_count);
        }

        return ans;
    }
};
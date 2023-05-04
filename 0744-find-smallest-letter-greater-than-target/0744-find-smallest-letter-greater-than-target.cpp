class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int s=0;
        int e=letters.size()-1;
        int mid = (s+e)/2;
        char ans;
        while(s<=e)
        {

             if(letters[mid]>target)
             {
                   ans = letters[mid];
                   e=mid-1;
             }
             else if(letters[mid]<target)
             {
                 s=mid+1;
             }
             else
             {

                s=mid+1;

             }
            mid = (s+e)/2;



        }
        if(mid==letters.size()-1)
        {
            return letters[0];
        }

        return ans;
    }
};
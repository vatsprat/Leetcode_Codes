class Solution {
public:

    bool isvowel(char c){
        return (c=='a' || c=='e' || c=='o' || c=='i' || c=='u');
    }
    int vowelStrings(vector<string>& words, int left, int right) {

        int wordc = 0;

        for(int i=left; i<=right; i++)
        {
            int count = 0;
            
            for(int j=0; j<words[i].length(); j++)
            {
                
                if(isvowel(words[i][j]) && j==0)
                count++;

                if(isvowel(words[i][j]) && j==words[i].length()-1)
                count++;
            }
            if(count==2)
            wordc+=1;
        }
        return wordc;
    }
};
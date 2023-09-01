class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n+1);
        ans[0] = 0;
        for(int i=1;i<=n;i++)
        {
            ans[i] = ans[i/2] + i%2;
        }


        return ans;


//         In O(N) Time
// Let if we have X and Y in Such a way that,
// X/2 = Y
// then Number of set bits in X - Number of set bit in Y <= 1

// eg let X = 7and Y = 3
// then 7 / 2 = 3;

// 7 -> 1 1 1 number of set bit are 3
// 3 -> 0 1 1 number of set bit are 2

// there difference is 3 - 2 <= 1

// another eg
// X = 12 and y = 6
// then 12 / 2 = 6;

// 12 -> 1100 number of set bit are 2
// 6 -> 0110 number of set bit are 2

// there difference is 2 - 2 <= 1

// There can be 2 cases
// whether X is Odd or Even

// if X is ODD

// then the (LSB) Least Significant Bit will always be set and dividing by 2 means right shifting the number by 1 bit.
// so if last bit is set and right shift it by 1 bit than the last set bit will be lost.
// therfore the new number Y has 1 set bit less than in compare to X
// But if X is Even

// then LSB will be equal to 0, therefore even we do right shift by1 bit then only this 0 bit will be lost and no set bit got lost
// so When we have X has Even,

// no of set bit in X = no of set bit in Y
// and When X is ODD

// no of set bit in X = 1 + no of set bit in Y
    }
};
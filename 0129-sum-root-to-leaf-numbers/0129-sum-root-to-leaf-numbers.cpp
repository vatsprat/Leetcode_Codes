class Solution {
public:
    void solve(TreeNode* root , int& sum , int ls)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
             ls = ls*10 + root->val;
             sum+=ls;
             return;
        }

        ls = ls*10 + root->val;
        solve(root->left,sum,ls);
        solve(root->right,sum,ls);


    }
    int sumNumbers(TreeNode* root) 
    {
        int sum = 0;
        int ls = 0;
        solve(root,sum,ls);
        return sum;
    }
};
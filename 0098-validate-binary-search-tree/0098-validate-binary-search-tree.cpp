/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root , long long int mini ,long long int maxi)
    {
        if(root==NULL)
        {
            return true;
        }
if(root->val<=mini || root->val>=maxi)
        {
            return false;
        }


        bool left = solve(root->left,mini,root->val);
        bool right = solve(root->right,root->val,maxi);

        if(root->val<=mini && root->val>=maxi)
        {
            return false;
        }
        return left && right;
    }
    bool isValidBST(TreeNode* root) 
    {   
         long long int mini = LLONG_MIN;
         long long int maxi = LLONG_MAX;

        return solve(root,mini,maxi);








     
        
    }
};
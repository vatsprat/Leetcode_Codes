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
    void reverse(TreeNode* root1 , TreeNode* root2,int l)
    {
        if(root1==NULL || root2==NULL)
        {
            return;
        }
        if(l&1)
        {
            swap(root1->val,root2->val);
        }

        reverse(root1->left,root2->right,l+1);
        reverse(root1->right,root2->left,l+1);



    }
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
            
        int l=1;
        reverse(root->right,root->left,l); 

        return root;       



    }

};
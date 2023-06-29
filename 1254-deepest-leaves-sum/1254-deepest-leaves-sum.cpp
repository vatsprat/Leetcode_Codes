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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }

        int left = height(root->left);
        int right = height(root->right);

        return max(left,right) + 1;
    }
    int solution(TreeNode* root , int depth , int d)
    {
        if(root==NULL)
        {
            return 0;
        }

        if(root->left ==NULL && root->right==NULL && d == depth-1)
        {
            return root->val;
        }

     int sum = solution(root->left,depth,d+1) + solution(root->right,depth,d+1);
       
       return sum;

    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int depth = height(root);
        int d = 0;

        return solution(root,depth,d);
    }
};
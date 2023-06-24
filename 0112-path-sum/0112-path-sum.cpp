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
    void check(TreeNode* root , int targetsum , int currsum , int &flag)
    {
       
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            currsum += root->val;
             cout<<currsum<<"  "<<endl;
            if(currsum == targetsum)
            {
                flag = 0;
            } 

            return;
        }

        currsum += root->val;

        check(root->left,targetsum,currsum,flag);
        check(root->right,targetsum,currsum,flag); 

    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        int flag = 1;
        int currsum = 0;

        check(root,targetSum,currsum,flag);

        return (flag) ? false : true;
    }
};
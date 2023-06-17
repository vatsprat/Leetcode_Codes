/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solution(TreeNode* cloned , TreeNode* target , TreeNode* &ans)
    {
          if(cloned==NULL)
          {
              return;
          }
          if(cloned->val == target->val)
          {
              ans = cloned;
          }
          solution(cloned->left,target,ans);
          solution(cloned->right,target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode*target) 
    {
       TreeNode* ans;
       solution(cloned , target,ans);
       return ans;

        
    }
};
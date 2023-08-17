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
    void createvec(TreeNode* root,vector<int> &ans)
    {
         if(root==NULL)
         {
             return ;
         }

         createvec(root->left,ans);
         ans.push_back(root->val);
         createvec(root->right,ans);
    }
    
    bool findTarget(TreeNode* root, int k) 
    {
        vector<int> ans;

        createvec(root,ans);

        int s = 0;
        int e = ans.size()-1;

        while(s<e)
        {
            if(ans[s]+ans[e]==k)
            {
                return true;
            }
            else if(ans[s]+ans[e]<k)
            {
                s++;
            }
            else
            {
                e--;
            }
        }

        return false;



    }
};
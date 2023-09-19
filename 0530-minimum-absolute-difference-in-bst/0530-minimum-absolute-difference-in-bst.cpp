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
    void getsorted(TreeNode* root,vector<int>& sor)
    {
        if(root==NULL)
        {
            return;
        }

        getsorted(root->left,sor);

        sor.push_back(root->val);

        getsorted(root->right,sor);


    }
    int getMinimumDifference(TreeNode* root) 
    {
        vector<int> sor;
        getsorted(root,sor);

        int mindiff = INT_MAX;
        for(int i=0;i<sor.size()-1;i++)
        {
             mindiff = min(mindiff,sor[i+1]-sor[i]);
        }


        return mindiff;
        
    }
};
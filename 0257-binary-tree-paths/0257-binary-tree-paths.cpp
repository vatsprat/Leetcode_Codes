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
    void paths(TreeNode* root, string temp , vector<string>& ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
              string d = to_string(root->val);
              temp = temp + d;
              ans.push_back(temp);
              return;
        }

        int data = root->val;
        temp = temp + to_string(data) + "->";

        paths(root->left ,temp ,ans);
        paths(root->right ,temp , ans);


    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> ans;
        string temp;
        paths(root,temp,ans);

        return ans;
    }
};
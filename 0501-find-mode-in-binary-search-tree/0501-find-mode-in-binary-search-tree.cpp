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
    void solve(TreeNode* root,vector<int> &inorder)
    {
        if(root==NULL)
        {
            return;
        }

        solve(root->left,inorder);
        inorder.push_back(root->val);
        solve(root->right,inorder);

    }
    vector<int> findMode(TreeNode* root) 
    {
        vector<int> inorder;
        solve(root,inorder);
        unordered_map<int,int> mp;
        for(auto i:inorder)
        {
            mp[i]++;
        }
        vector<int> ans;
        int maxi=0;
        for(auto i:mp)
        {
            maxi = max(maxi,i.second);
        }
        for(auto i:mp)
        {
            if(i.second==maxi)
            {
                ans.push_back(i.first);
            }
        }

        return ans;



        
    }
};
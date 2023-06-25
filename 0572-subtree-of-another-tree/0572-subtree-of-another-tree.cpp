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
    void create(TreeNode* root , string &ans)
    {
         if(root==NULL)
         {
             ans.push_back('a');
             return;
         }       

         ans.push_back((root->val) + '0');

         create(root->left,ans);
         create(root->right,ans); 


        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        string a;
        create(root,a);
        string b;
        create(subRoot,b);

        

       

        cout<<a<<endl;
        cout<<b<<endl;

        int c = a.find(b);

        cout<<c;
        if(c>=0)
        {
            return true;
        }
        else
        {
            return false;
        }


      return false;

    }
};
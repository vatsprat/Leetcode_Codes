class Solution {
public:
    void check(TreeNode* root , int temp , int &flag)
    {
         if(root==NULL)
         {
             return;
         }

         if(root->val != temp)
         {
             flag = 1;
         }
         check(root->left,temp,flag);
         check(root->right,temp,flag);


    }
    bool isUnivalTree(TreeNode* root) 
    {
        int flag = 0;
        int temp = root->val;
        check(root,temp,flag);

        return (flag) ? false : true;
    }
};
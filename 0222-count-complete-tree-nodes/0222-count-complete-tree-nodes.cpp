class Solution {
public:
    void height(TreeNode* root,int& count)
    {
        if(root==NULL)
        {
            return;
        }

        count = count+1;


        height(root->left,count);

        height(root->right,count);



    

        
    }
    int countNodes(TreeNode* root) 
    {
        int count=0;
        height(root,count);

        return count;
    }
};
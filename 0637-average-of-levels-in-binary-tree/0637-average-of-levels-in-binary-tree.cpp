
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int count=0;
        double sum=0;

        while(!q.empty())
        {
             TreeNode* temp = q.front();
             q.pop();
             if(temp==NULL)
             { 
                 sum = sum /count;
                 ans.push_back(sum);

                 sum = 0;
                 count=0;
                 
                 if(!q.empty())
                 {
                     q.push(NULL);
                 }
             }
             else
             {   sum = sum + temp->val;
                 count++;
                 if(temp->left)
                 {
                     q.push(temp->left);
                 }
                 if(temp->right)
                 {
                     q.push(temp->right);
                 }
             }
        }
        return ans;
    }
};
class Solution {
public:
    void solve(TreeNode* root , vector<int> temp , int targetSum , vector<vector<int>>& ans , int currsum)
    {

         if(root==NULL)
         {
             return;
         }
          if(root->right == NULL && root->left == NULL)
          {
               currsum+=root->val;
               temp.push_back(root->val);
               if(currsum==targetSum)
               {
               ans.push_back(temp);
               
               }

               return;
          }

          temp.push_back(root->val);
          currsum+=root->val;
          solve(root->left,temp,targetSum,ans,currsum);
          solve(root->right,temp,targetSum,ans,currsum);





          if(targetSum==0 && (root->right == NULL && root->left == NULL))
          {
               ans.push_back(temp);
               return;
          }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
         vector<vector<int>> ans;
         vector<int> temp;
         int currsum=0;
         solve(root,temp,targetSum,ans,currsum);

         return ans;
    }
};
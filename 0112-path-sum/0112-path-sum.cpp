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

bool check(int sum,TreeNode* root,int target){
      if(!root){
        return false;
      }
      sum+=root->val;

     if(!root->left && !root->right){
        if(sum==target){
            return true;
        }
     }
      return check(sum,root->left,target)||
      check(sum,root->right,target);

}
    bool hasPathSum(TreeNode* root, int target) {
    return check(0,root,target);
    

        
    }
};
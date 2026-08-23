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
int maxi = INT_MIN;
int check(TreeNode* root){
    if(!root){
        return 0;
    }

    int a=max(0,check(root->left));
    int b= max(0,check(root->right));
maxi=max(maxi,root->val+a+b);
    return root->val+max(a,b);
}
    int maxPathSum(TreeNode* root) {
         check(root);
         return maxi;
        
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

 TreeNode* check(TreeNode* root, TreeNode* p, TreeNode* q){
    if(!root){
        return NULL;
    }
    if(root==p||root==q){
        return root;
    }

   TreeNode* x= check(root->left,p,q);
    TreeNode* y=check(root->right,p,q);

    if(x!=NULL &&y!=NULL){
        return root;
    }
    if(x!=NULL && y==NULL){
        return x;
    }


    if(y!=NULL &&x==NULL){
        return y;
    }
   return NULL;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return check(root,p,q);
    }
};
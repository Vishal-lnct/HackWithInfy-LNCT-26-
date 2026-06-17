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
TreeNode* check(TreeNode* root ,int val){
    if(!root)
            return NULL;

        if(root->val == val)
            return root;

        if(val < root->val)
            return check(root->left, val);

        return check(root->right, val);
}
    TreeNode* searchBST(TreeNode* root, int val) {

       return  check(root,val);

        
        
    }
};
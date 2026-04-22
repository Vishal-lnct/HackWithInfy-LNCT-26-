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
bool check(TreeNode* x1,TreeNode* x2){
    if(! x1 && !x2){
        return true;

    }
    if(!x1 ||!x2){
        return false;
    }

    return (x1->val==x2->val )&&
    check(x1->left,x2->right)&& check(x1->right,x2->left);
}
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        TreeNode* x1=root;
        TreeNode* x2=root;

        return check(x1,x2);

        
    }
};
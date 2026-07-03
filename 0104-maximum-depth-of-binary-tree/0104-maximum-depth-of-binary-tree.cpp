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

int check(TreeNode* root){


    if(!root){
        return 0;
    }

   int a=1+ check(root->left);
   int b= 1+check(root->right);

    return max(a,b);
}
    int maxDepth(TreeNode* root) {
        return check(root);
    }
};
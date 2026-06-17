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
bool check(TreeNode* root,int p){

    if(!root){
        return true;
    }
    
    
    if(root->val!=p){
        return false;
    }
    bool a=  check(root->left,p);
    bool b= check(root->right,p);

    return a&&b;

    
}
    bool isUnivalTree(TreeNode* root) {
        int p=root->val;
return check(root,p);
        
    }
};
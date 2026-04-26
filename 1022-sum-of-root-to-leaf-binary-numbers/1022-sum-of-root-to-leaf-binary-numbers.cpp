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
 void make(TreeNode* root,int n,int &ans){
    if(root==nullptr){
        return;
    }
    n=n|root->val;
    if(!root->left && !root->right){
        ans+=n;
    }
    n=n<<1;
    

    make(root->left,n,ans);
    make(root->right,n,ans);

 }
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int n=0;
        int ans=0;
        make(root,n,ans);
        return ans;
    }
};
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
    vector<int>ans;
public:
void check(TreeNode* root){
    if(!root){
        return;
    }
   ans.push_back(root->val);
   if(root->left){
    check(root->left);
   }
   if(root->right){
    check(root->right);
   }


}

    int kthSmallest(TreeNode* root, int k) {

        check(root);
        sort(ans.begin(),ans.end());

        return ans[k-1];
        
return 0;
        
    }
};
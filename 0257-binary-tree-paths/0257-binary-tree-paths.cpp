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

vector<string>ans;

void check(TreeNode* root ,string x){

    if(!root){
        return;
    }
    int p=root->val;
    x+=to_string(p);
    if(root->left || root->right){
        x+="->";
    }

    if(!root->left && !root->right){
        ans.push_back(x);
    }
    check(root->left,x);
    check(root->right,x);

    
}
    vector<string> binaryTreePaths(TreeNode* root) {
        string x;

         check(root,x);
         return ans;
        
    }
};
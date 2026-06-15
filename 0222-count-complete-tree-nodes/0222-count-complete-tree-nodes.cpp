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
int check(TreeNode* root,int &  sum){
    if(!root){
        return 0;
    }
    sum++;

    1+check(root->left,sum);
    1+check(root->right,sum);

    return sum;
}
    int countNodes(TreeNode* root) {
        int sum=0;
        return check(root,sum);
        
    }
};
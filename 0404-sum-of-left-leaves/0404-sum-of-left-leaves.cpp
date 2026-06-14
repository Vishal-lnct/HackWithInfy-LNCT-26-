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
int check( TreeNode* root ,int &sum,bool x){

    if(!root){
        return 0;
    }
    if(!root->left && !root->right && x==true){
        sum+=root->val;
    }

    check(root->left,sum,true);
     check(root->right,sum,false);


    return sum;
}
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        bool x=false;
         check(root,sum,x);
        return sum;

        
    }
};
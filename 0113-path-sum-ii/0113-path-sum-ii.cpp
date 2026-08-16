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

vector<vector<int>>ans;
void  check(TreeNode* root,int targetSum,vector<int>&x){


    if(!root){
        return;
    }

    x.push_back(root->val);

    targetSum=targetSum-root->val;

    if(!root->left && !root->right && targetSum==0){
        ans.push_back(x);

    }else{

        check(root->left,targetSum,x);
        check(root->right,targetSum,x);
    }

    x.pop_back();

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int>x;

        check(root,targetSum,x);
        return  ans;
        
    }
};
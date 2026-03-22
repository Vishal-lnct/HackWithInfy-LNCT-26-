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
//agr pop_back nhi krna h to pass by value kr do temp ko

void check(int sum,vector<int>&temp,TreeNode* root,int &targetSum){
    if(!root){
        return;
    }
    sum+=root->val;
    temp.push_back(root->val);

    if(!root->left && !root->right){
        if(sum==targetSum){
            ans.push_back(temp);
        }
    }
    check(sum,temp,root->left,targetSum);
     check(sum,temp,root->right,targetSum);
     temp.pop_back();
    


}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        int sum=0;
    check(0,temp,root,targetSum);

    return ans;
        
    }
};
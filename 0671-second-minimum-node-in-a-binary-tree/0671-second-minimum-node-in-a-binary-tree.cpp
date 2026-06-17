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
void check(TreeNode* root,vector<int>& ans){

    if(!root){
        return ;
    }
    ans.push_back(root->val);
    check(root->left,ans);
    check(root->right,ans);


}
    int findSecondMinimumValue(TreeNode* root) {

        vector<int>ans;
        check(root,ans);
        sort(ans.begin(),ans.end());
        if(ans.size()<=1){
            return -1;
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]!=ans[i]){
                return ans[i];
            }
        }
return -1;
        
    }
};
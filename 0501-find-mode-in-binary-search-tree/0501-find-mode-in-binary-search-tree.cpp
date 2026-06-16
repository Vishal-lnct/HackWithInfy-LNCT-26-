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

    void check(TreeNode* root,vector<int>&ans){

        if(!root){
            return;
        }
        ans.push_back(root->val);
        check(root->left,ans);
        check(root->right,ans);
    }
public:
    vector<int> findMode(TreeNode* root) {
   vector<int>ans;
        check(root,ans);

     
         unordered_map<int,int>x;

for(int i=0;i<ans.size();i++){
    x[ans[i]]++;
}
       

        int maxi=0;
        for(auto &i:x){
            if(i.second>maxi){
                maxi=i.second;
            }

        }

        vector<int>res;
        for(auto &p:x){
            if(p.second==maxi){
                res.push_back(p.first);
            }
        }


        return res;
    }
};
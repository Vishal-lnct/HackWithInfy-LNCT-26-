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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode* >q;
        q.push(root);
        bool even=true;
       
       while(!q.empty()){
        int prev;
  if(even){
     prev=INT_MIN;
  }else{
     prev=INT_MAX;
  }

        int  n=q.size();

        for(int i=0;i<n;i++){
            TreeNode* x=q.front();
            q.pop();
        if(even){

            if(x->val%2==0 || prev>=x->val){
                return false;
            }
        }else{
            if(x->val%2!=0 || prev<=x->val){
                return false;
            }
           
        }
         prev=x->val;
       
        if(x->left){
            q.push(x->left);
        }
         if(x->right){
            q.push(x->right);
        }


        }
         even=!even;
       }
       return true;
    }
};
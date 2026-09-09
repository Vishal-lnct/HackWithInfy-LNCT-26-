/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    int check(TreeNode root){
        if(root==null){
            return 0;
        }
        if (root.left == null && root.right == null) {
            return 1;
        }
if(root.right==null){

    return 1+check(root.left);
}

if(root.left==null){
    return 1+check(root.right);
}

return  1+Math.min(check(root.left),check(root.right));



    }
    public int minDepth(TreeNode root) {
        return check( root);
    }
}
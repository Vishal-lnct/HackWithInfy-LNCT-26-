class Solution {
public:
    vector<TreeNode*> solve(int n) {

        if (n % 2 == 0) return {}; 

        if (n == 1) {
            return {new TreeNode(0)};
        }

        vector<TreeNode*> result;

        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> x = solve(i);
            vector<TreeNode*> y = solve(n - i - 1);

            for (auto &l : x) {
                for (auto &r : y) {
                    TreeNode* root = new TreeNode(0);
                    root->left = l;
                    root->right = r;
                    result.push_back(root);
                }
            }
        }

        return result;
    }

    vector<TreeNode*> allPossibleFBT(int n) {
        return solve(n);
    }
};
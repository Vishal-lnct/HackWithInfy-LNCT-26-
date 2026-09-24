class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> ans(n, vector<int>(n));

        // Transpose into new matrix
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans[j][i] = matrix[i][j];
            }
        }

        // Reverse every row
        for(int i = 0; i < n; i++) {
            reverse(ans[i].begin(), ans[i].end());
        }

        // Copy ans back to matrix
        matrix = ans;
    }
};
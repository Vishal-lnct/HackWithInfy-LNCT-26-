class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

       
        vector<int> x(n, INT_MIN);

        for(int j = 0; j < n; j++) {
            for(int i = 0; i < m; i++) {
                x[j] = max(x[j], matrix[i][j]);
            }
        }

     
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == -1) {
                    matrix[i][j] = x[j];
                }
            }
        }

        return matrix;
        
    }
};
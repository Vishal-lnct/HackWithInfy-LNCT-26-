class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        vector<int> x(m, 0);
        vector<int> y(n, 0);

        for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                    x[i]++;
                    y[j]++;
                }
            }
        }

        int count = 0;

        for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1 && x[i] == 1 && y[j] == 1) {
                    count++;
                }
            }
        }

        return count;
        
        
    }
};
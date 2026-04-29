class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

         long long sum = 0;
         int neg = 0;
         int mn = INT_MAX;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int x = matrix[i][j];
                sum += abs(x);
                if (x < 0) neg++;
                mn = min(mn, abs(x));
            }
        }

        if (neg % 2 != 0)
            sum -= 2 * mn;

        return sum;
        
    }
};
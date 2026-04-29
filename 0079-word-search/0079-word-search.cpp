class Solution {
public:


    bool check(vector<vector<char>>& board, vector<vector<bool>>& vis, 
             int i, int j, string& word, int idx) {
        
     
        if (idx == word.size()) return true;

        int m = board.size();
        int n = board[0].size();

       
        if (i < 0 || j < 0 || i >= m || j >= n || 
            vis[i][j]==true || board[i][j] != word[idx]) {
            return false;
        }

      
        vis[i][j] = true;

    
        bool x= check(board, vis, i+1, j, word, idx+1) ||
                     check(board, vis, i-1, j, word, idx+1) ||
                     check(board, vis, i, j+1, word, idx+1) ||
                     check(board, vis, i, j-1, word, idx+1);

      
        vis[i][j] = false;

        return x;
    }
    bool exist(vector<vector<char>>& board, string word) {
       int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (check(board, vis, i, j, word, 0)) {
                    return true;
                }
            }
        }

        return false;

        
    }
};
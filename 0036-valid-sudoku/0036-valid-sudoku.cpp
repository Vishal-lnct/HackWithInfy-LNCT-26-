class Solution {
public:

bool check(vector<vector<char>>& board,int i,int er,int j, int ec){
     set<char>s;
    for(int a=i;a<er;a++){
       
        for(int b=j;b<ec;b++){
            if(board[a][b] == '.') continue;
            if(s.find(board[a][b])!=s.end()){
                return false;
            }
            s.insert(board[a][b]);
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=board.size();
        int col=board[0].size();

        for(int i=0;i<row;i++){
            set<char>s;
            for(int j=0;j<col;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(s.find(board[i][j])!=s.end()){
                    return false;
                }
                s.insert(board[i][j]);
            }
        }



        for(int i=0;i<col;i++){
            set<char>s;
            for(int j=0;j<row;j++){
  if(board[j][i]=='.'){
    continue;
  }
  if(s.find(board[j][i])!=s.end()){
    return false;
  }
  s.insert(board[j][i]);
            }
        }

for(int i=0;i<row;i+=3){
    int er=i+3;
    for(int j=0;j<col;j+=3){
        int ec=j+3;

        if(!check(board,i,er,j,ec)){
            return false;
        }

        
    }
}
return true;

    }
};
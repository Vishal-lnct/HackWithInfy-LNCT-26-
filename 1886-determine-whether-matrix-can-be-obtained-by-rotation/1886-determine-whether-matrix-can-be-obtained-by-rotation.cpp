class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int row=mat.size();
        int col=mat[0].size();
        
for(int k=0;k<4;k++){
 vector<vector<int>> x(row, vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            x[j][row-i-1]=mat[i][j];
        }
    }
    if(x==target){
        return true;
    }
    mat=x;
}
return false;
    }
};
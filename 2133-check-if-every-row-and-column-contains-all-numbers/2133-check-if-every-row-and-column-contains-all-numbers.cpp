class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            vector<int>x(row+1,0);

            for(int j=0;j<col;j++){
                int val=matrix[i][j];
                if(val<1 || val>row || x[val]==1){
                    return false;
                }
                x[val]=1;
            }
            
        }


             for(int i=0;i<col;i++){
            vector<int>x(col+1,0);

            for(int j=0;j<row;j++){
                int val=matrix[j][i];
                if(val<1 || val>row || x[val]==1){
                    return false;
                }
                x[val]=1;
            }
            
        }
        return true;
    }
};
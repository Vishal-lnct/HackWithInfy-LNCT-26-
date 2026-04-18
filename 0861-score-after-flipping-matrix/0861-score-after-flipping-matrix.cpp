class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int  col=grid[0].size();

        for(int  i=0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<col;j++){
                    if(grid[i][j]==1){
                        grid[i][j]=0;
                    }else{
                        grid[i][j]=1;
                    }
                }
            }
        }
        for(int j=0;j<col;j++){
            int cnt=0;
            for(int  i=0;i<row;i++){
                if(grid[i][j]==0){
                    cnt++;
                }
            }
            if(cnt>row/2){
                for(int p=0;p<row;p++){
                    if(grid[p][j]==1){
                        grid[p][j]=0;
                    }else{
                        grid[p][j]=1;
                    }
                }
            }
        }

        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int x=col-j-1;
                sum+=grid[i][j]*pow(2,x);
            }
        }
        return sum;
    }
};
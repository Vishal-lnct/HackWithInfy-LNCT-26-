class Solution {
public:

void check(int i,int j,vector<vector<char>>& grid,int row,int col, vector<vector<bool>>&vis)
{
if(i<0 ||j<0 ||i>=row  || j>=col  || grid[i][j]!='1'|| vis[i][j]==true){
    return ;
}
vis[i][j]=true;

check(i+1,j,grid,row,col,vis);
check(i,j+1,grid,row,col,vis);
check(i-1,j,grid,row,col,vis);
check(i,j-1,grid,row,col,vis);






}
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        int count=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1' && vis[i][j]==false){

                    check(i,j,grid,row,col,vis);
                    count++;
                }
            }
        }

        return count;
    }
};
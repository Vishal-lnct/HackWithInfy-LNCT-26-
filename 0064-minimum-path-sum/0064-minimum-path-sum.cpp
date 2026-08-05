class Solution {
public:
int t[201][201];
int check(int i,int j,vector<vector<int>>& grid){
int m=grid.size();
int n=grid[0].size();

if(i>=m ||j>=n){
    return 1e9;
}
if(t[i][j]!=-1){
    return t[i][j];
}
if(i==m-1 && j==n-1){
    return grid[m-1][n-1];
}
return  t[i][j]= grid[i][j]+min(check(i+1,j,grid),check(i,j+1,grid));

}
    int minPathSum(vector<vector<int>>& grid) {

        memset(t,-1,sizeof(t));
        return check(0,0,grid);
        
    }
};
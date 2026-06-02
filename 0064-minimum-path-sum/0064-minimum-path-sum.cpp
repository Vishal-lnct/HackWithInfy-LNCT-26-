class Solution {
public:

int check(int i,int j,vector<vector<int>>& grid, vector<vector<int>>&dp){

    int m=grid.size()-1;
    int n=grid[0].size()-1;
    if(i > m || j > n)
    return 1e9;

    if(i==m && j==n){
        return grid[i][j];

    }
if(dp[i][j]!=-1){
    return dp[i][j];
}
if(i==m){

    return dp[i][j]=grid[i][j]+check(i,j+1,grid,dp);
}else if(j==n){
 return dp[i][j]=grid[i][j]+check(i+1,j,grid,dp);
}else{

    return dp[i][j]=grid[i][j]+min(check(i+1,j,grid,dp),check(i,j+1,grid,dp));
}




}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       return check(0,0,grid,dp);
    }
};
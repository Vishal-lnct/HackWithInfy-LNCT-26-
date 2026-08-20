class Solution {
public:

int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
    int m=grid.size();
    int n=grid[0].size();
if(dp[i][j]!=-1){
    return dp[i][j];
}
int ans=1;

if(i>0 &&grid[i-1][j]>grid[i][j]){
     ans= max(ans,1+solve(i-1,j,grid,dp));
}

if(i+1<m &&grid[i+1][j]>grid[i][j]){
     ans=max(ans,1+solve(i+1,j,grid,dp));
}

if(j>0 &&grid[i][j-1]>grid[i][j]){
     ans=max(ans,1+solve(i,j-1,grid,dp));
}

if(j+1<n &&grid[i][j+1]>grid[i][j]){
     ans=max(ans,1+solve(i,j+1,grid,dp));
}


return dp[i][j]= ans;


}
    int longestIncreasingPath(vector<vector<int>>& grid) {
        int m=grid.size();
    int n=grid[0].size();

    vector<vector<int>>dp(m,vector<int>(n,-1));
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                count= max(count,solve(i,j,grid,dp));
            }
        }
        return count;
        
    }
};
class Solution {
public:

const int mod=1e9+7;

int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
    int m=grid.size();
    int n=grid[0].size();
if(dp[i][j]!=-1){
    return dp[i][j];
}
int ans=1;

if(i>0 &&grid[i-1][j]>grid[i][j]){
     ans+=solve(i-1,j,grid,dp)%mod;
}

if(i+1<m &&grid[i+1][j]>grid[i][j]){
     ans+=solve(i+1,j,grid,dp)%mod;
}

if(j>0 &&grid[i][j-1]>grid[i][j]){
     ans+=solve(i,j-1,grid,dp)%mod;
}

if(j+1<n &&grid[i][j+1]>grid[i][j]){
     ans+=solve(i,j+1,grid,dp)%mod;
}


return dp[i][j]= ans%mod;


}
    int countPaths(vector<vector<int>>& grid) {
int m=grid.size();
    int n=grid[0].size();

    vector<vector<int>>dp(m,vector<int>(n,-1));
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count=count%mod;
                count=count+solve(i,j,grid,dp);
            }
        }
        return count;
    }
};
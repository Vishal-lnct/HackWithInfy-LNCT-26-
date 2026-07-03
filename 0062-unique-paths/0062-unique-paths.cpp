class Solution {
public:

int check(int i,int j,int m,int  n,vector<vector<int>>&dp){
    if(i>=m || j>=n){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
if(i==m-1 && j==n-1){
    return 1;
}

int a=check(i+1,j,m,n,dp);
int b=check(i,j+1,m,n,dp);

return  dp[i][j]=a+b;


}
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m,vector<int>(n,-1));
        return check(0,0,m,n,dp);

        
    }
};
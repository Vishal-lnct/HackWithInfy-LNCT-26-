class Solution {
public:


int check(int i,int j,vector<vector<int>>& x, vector<vector<int>> &dp){

    int m=x.size();
    int n=x[0].size();

    if(i>=m ||j>=n){
        return 0;
    }


 if(x[i][j]==1){
        return 0;
    }
    if(i==m-1 && j==n-1){
        return 1;
    }

   
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int a=check(i+1,j,x,dp);
    int b=check(i,j+1,x,dp);
    return dp[i][j]= a+b;

}
    int uniquePathsWithObstacles(vector<vector<int>>& x) {
         int m=x.size();
    int n=x[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return check(0,0,x,dp);
        
    }
};
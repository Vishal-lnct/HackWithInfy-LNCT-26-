class Solution {
public:

int count(int i,int n,vector<int>&dp){
    if(i>=n){
        return 1;

    }
    if(dp[i]!=-1){
        return dp[i];
    }

    int a=count(i+1,n,dp);
    int b=count(i+2,n,dp);
    return  dp[i]=a+b;
}
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);
        return count(1,n,dp);
    }
};
class Solution {
public:
int check(int i,int n ,vector<int>&dp){
if(i==n){
    return 1;
}
if(i>n){
    return 0;
}
if(dp[i]!=-1){
    return dp[i];
}
int a =check(i+1,n,dp);
int b=check(i+2,n,dp);
 return dp[i]=a+b;
 

}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        return check(0,n,dp);
    }
};
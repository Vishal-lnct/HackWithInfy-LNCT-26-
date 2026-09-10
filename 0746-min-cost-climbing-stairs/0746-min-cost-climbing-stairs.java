class Solution {


    int check(int i,int[]cost,int[] dp){
int n=cost.length;


if(i>=n){
    return 0;
}
if(dp[i]!=-1){
    return dp[i];
}
int a=cost[i]+check(i+1,cost,dp);
int b=cost[i]+check(i+2,cost,dp);
return dp[i]= Math.min(a,b);


    }
    public int minCostClimbingStairs(int[] cost) {
        int n=cost.length;

        int[] dp=new int[n];
        Arrays.fill(dp,-1);
        return Math.min(check(0,cost,dp),check(1,cost,dp));
        
    }
}
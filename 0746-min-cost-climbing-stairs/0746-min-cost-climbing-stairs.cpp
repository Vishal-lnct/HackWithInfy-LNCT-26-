class Solution {
public:

int check(int i,vector<int>&cost,vector<int>&dp){
 int n = cost.size();

        if(i >= n) {
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }

        int a = cost[i] + check(i+1, cost,dp);
        int b = cost[i] + check(i+2, cost,dp);

        return dp[i]= min(a, b);

}
    int minCostClimbingStairs(vector<int>& cost) {
        int  n=cost.size();
vector<int>dp(n,-1);
        return min(check(0,cost,dp), check(1,cost,dp));

        
        
    }
};
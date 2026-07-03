class Solution {
public:

int check(int i,vector<int>&coins,int amount, vector<vector<int>>&dp){

    int n=coins.size();

      if(amount==0){
        return 0;
    }
    if(i>=n){
        return INT_MAX;
    }

  if(dp[i][amount]!=-1){
    return dp[i][amount];
  }
    int take=INT_MAX;
    if(coins[i]<=amount){
       int ans=check(i,coins,amount-coins[i],dp);
       if(ans!=INT_MAX){
         take=1+ans;
         
       }
    }

    int nottake=check(i+1,coins,amount,dp);


    return  dp[i][amount]= min(take,nottake);



}
    int coinChange(vector<int>& coins, int amount) {


        int n=coins.size();

        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int i=0;

        int p= check(0,coins,amount,dp);
        if(p==INT_MAX){
            return  -1;
        }

return p;

        
    }
};
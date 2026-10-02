class Solution {
public:
int t[13][10001];
int check(int i,vector<int>&coins,int amount){


    int n=coins.size();
    if(amount==0){
        return 0;
    }
    if(i>=n){
        return 1e9;
    }
    if(t[i][amount]!=-1){
        return t[i][amount];
    }
    int a = 1e9;
    if(coins[i]<=amount){
        a= 1+check(i,coins,amount-coins[i]);
    }
    int b=check(i+1,coins,amount);

    return  t[i][amount]=min(a,b);

    
}
    int coinChange(vector<int>& coins, int amount) {

        memset(t,-1,sizeof(t));
         int ans = check(0, coins, amount);

    if(ans == 1e9) {
        return -1;
    }

    return ans;
        
    }
};
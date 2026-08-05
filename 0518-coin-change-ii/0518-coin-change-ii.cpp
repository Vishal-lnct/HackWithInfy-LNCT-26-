class Solution {
public:
int t[300][5001];
int check(int  i,int amount,vector<int>&coins){
    int n=coins.size();

if(amount == 0){
    return 1;
}

if(i >= n){
    return 0;
}

if(amount < 0){
    return 0;
}
if(t[i][amount]!=-1){
    return t[i][amount];
}

int take = 0;

if(coins[i] <= amount){
    take = check(i, amount - coins[i], coins);
}

int ntake=check(i+1,amount,coins);

return t[i][amount]= take+ntake;
}
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        return  check(0,amount,coins);
        
    }
};
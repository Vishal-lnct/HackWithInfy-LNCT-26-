class Solution {
public:
int t[13][10001];
int check(vector<int>&nums,int amount,int i){

int n=nums.size();
if(i>=n){
    return 1e9;
}
if(t[i][amount]!=-1){
    return t[i][amount];
}
if(amount==0){
    return 0;
}
int take=1e9;
if(nums[i]<=amount){
take=1+check(nums,amount-nums[i],i);

}
int ntake=check(nums,amount,i+1);

return t[i][amount]= min(take,ntake);
}
    int coinChange(vector<int>& coins, int amount) {
        memset(t,-1,sizeof(t));
        int p= check(coins,amount,0);
        if(p==1e9){
            return -1;
        }
        return p;
    }
};
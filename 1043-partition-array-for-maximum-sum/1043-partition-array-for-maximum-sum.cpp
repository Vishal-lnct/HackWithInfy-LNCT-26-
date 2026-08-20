class Solution {
public:

int solve(int i,vector<int>&arr,int k ,vector<int>&dp){
    int n=arr.size();
if(i>=arr.size()){
    return 0;
}
if(dp[i]!=-1){
    return dp[i];
}

int res=0;
int maxi=INT_MIN;
for(int j=i;j<n&& j-i+1<=k;j++){

maxi=max(maxi,arr[j]);

res= max(res,maxi*(j-i+1)+solve(j+1,arr,k,dp));




}

return dp[i]= res;

}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
int n=arr.size();
        vector<int>dp(n+1,-1);
        return solve(0,arr, k,dp);
    }
};
class Solution {
public:

int check(vector<int>&nums,int i,vector<int>&dp){
int n=nums.size();

    if(i>=n){
        return 0;
    }
if(dp[i]!=-1){
    return dp[i];
}
    int a=nums[i]+check(nums,i+2,dp);
    int b=check(nums,i+1,dp);

    return  dp[i]=max(a,b);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);

        return check(nums,0,dp);
        
    }
};
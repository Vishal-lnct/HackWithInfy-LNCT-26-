class Solution {
public:

int check(int i,vector<int>&nums,vector<int>&dp ){
    int n=nums.size();


    if(i>=n){
        return 0;
    }
    if(dp[i]!=-1){
    return dp[i];
    }
    int take=nums[i]+check(i+2,nums,dp);
    int ntake =check(i+1,nums,dp);

    return  dp[i]=max(take,ntake);
}

    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);

        return check(0,nums,dp);
        
    }
};
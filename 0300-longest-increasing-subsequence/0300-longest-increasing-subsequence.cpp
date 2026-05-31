class Solution {
public:

int check(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
    int n=nums.size();
    if(i==n){
        return 0;
    }
   
    if(dp[i][j+1]!=-1){
return dp[i][j+1];
    }

    int take=0;
    if(j==-1 || nums[j]<nums[i]){
        take=1+check(i+1,i,nums,dp);
       
       
    }
    
   int nottake= check(i+1,j,nums,dp);
    return dp[i][j+1]= max(take,nottake);

}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
vector<vector<int>>dp(n,vector<int>(n+1,-1));

        return check(0,-1,nums,dp);

    }
};
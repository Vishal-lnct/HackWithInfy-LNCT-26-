class Solution {
public:

int  check(int i,vector<int>& stones,vector<int>&prefix,vector<int>&dp){

    int n=stones.size();
     if(i == n-1){
        return prefix[n-1];
    }
    if(dp[i]!=INT_MIN){
        return dp[i];
    }

    int take=prefix[i]-check(i+1,stones,prefix,dp);
    int ntake=check(i+1,stones,prefix,dp);

    return dp[i]= max(take,ntake);
}
    int stoneGameVIII(vector<int>& stones) {
        int n=stones.size();
        vector<int>dp(n,INT_MIN);

        vector<int>prefix(n);
        int sum=0;
        for(int i=0;i<stones.size();i++){
            sum+=stones[i];
            prefix[i]=sum;
        }
        return check(1,stones,prefix,dp);

        
    }
};
import java.util.*;

class Solution {

    int check(int i,int[] nums,int[] dp){
int n=nums.length;

if (i >= n) {
            return 0;
        }

if(dp[i]!=-1){
    return dp[i];
}

int take=nums[i]+check(i+2,nums,dp);
int ntake=check(i+1,nums,dp);

return  dp[i]=Math.max(take,ntake);



    }
    public int rob(int[] nums) {

       int n=nums.length;

       int[] dp=new int[n];
       Arrays.fill(dp,-1);

       return check(0,nums,dp);
    }
}
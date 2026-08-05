class Solution {
public:

int check(int i,vector<int>&nums,int target,int sum){
int n=nums.size();

        if (i >= n) {
            if (sum == target)
                return 1;
            else
                return 0;
        }

    int take=check(i+1,nums,target,sum+nums[i]);
    int ntake=check(i+1,nums,target,sum-nums[i]);

    return  take+ntake;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
return check(0,nums,target,sum);

    }
};
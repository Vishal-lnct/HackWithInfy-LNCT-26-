class Solution {
public:
vector<int>dp;

int check(int i,vector<int>&nums,vector<int>&dp){
 int n = nums.size();

        if (i >= n - 1)
            return 0;

        if (dp[i] != -1)
            return dp[i];

        int ans = INT_MAX;

        for (int jump = 1; jump <= nums[i]; jump++) {
            if (i + jump < n) {
                int temp = check(i + jump, nums, dp);

                if (temp != INT_MAX) {
                    ans = min(ans, 1 + temp);
                }
            }
        }

        return dp[i] = ans;
    }

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return check(0, nums, dp);
    }
};
class Solution {
public:
int t[2501][2501];
    int check(int i, vector<int>& nums, int prev) {

        if(i >= nums.size()) {
            return 0;
        }
if(t[i][prev+1]!=-1){
    return t[i][prev+1];
}
        int take = 0;
        int skip = 0;

        if(prev == -1 || nums[i] > nums[prev]) {
            take = 1 + check(i + 1, nums, i);
        }

        skip = check(i + 1, nums, prev);

        return  t[i][prev+1]=max(take, skip);
    }


    int lengthOfLIS(vector<int>& nums) {
        
memset(t,-1,sizeof(t));
        return  check(0,nums,-1);
    }
};